#!/usr/bin/env python
# talk to an rs485 linked "smart sensor"
# example args: /dev/ttyUSB0 9600 [-p]
# -p Sets us to decode the data as PowerInfo instead of RS485
import sys
import serial
import threading
import python.rs485_message_pb2 as rs485_message_pb2
import python.power_pb2 as power_pb2

from struct import *
from google.protobuf import message

# True if the thing connected is a powerboard, false otherwise
isPowerBoard = len(sys.argv) >= 4 and sys.argv[3] == "-p"

ser = serial.Serial(sys.argv[1], sys.argv[2], timeout=0.1)
connected = True

def processRawResponse(s):
	# s = unpack('B', s[0])
	hex = bytearray.fromhex(s.encode('hex'))

        if (len(hex) < 4):
            print "Invalid message size"
            return None

        if (hex[0] != 0):
            print "Message not for us. Dest: %x" % hex[0]
            return None

        if (hex[1] != 255):
            print "Message not a response. Type: %d" % hex[2]
            return None

	crc = computeCRC(hex[:len(hex) - 2])
        crclow = crc & 0xff
        crchigh = (crc >> 8) & 0xff

        if crclow == hex[len(hex) - 2] and crchigh == hex[len(hex) - 1]:
            return s[2:len(hex) - 2]
        else:
            print "Checksum error"
            return None

def readSerial():
	while connected:
		s = ser.read(512)
		if len(s)>0:
			raw = processRawResponse(s)
                        if raw is not None:
                            try:
                                msg = power_pb2.PowerInfo() if isPowerBoard else rs485_message_pb2.Rs485()
                                msg.ParseFromString(raw)
                                print msg

                            except message.DecodeError:
                                    print raw
	ser.close()

def crc16_update(crc, a):
	if type(a) == str:
		a = ord(a)

	crc ^= a;
	for i in range(0, 8):
		if crc & 1:
			crc = (crc >> 1) ^ 0xA001;
		else:
			crc = (crc >> 1);
	return crc

def computeCRC(msg):
	# if type(msg) == str:
	# 	msg = bytearray.fromhex(str.encode('hex'))

	crc = 0xFFFF
	for a in msg:
		crc = crc16_update(crc, a)
	return crc

def sendEcho(id, message):
	msg = (id + '00').decode('hex') + message + '00'.decode('hex')
	crc = computeCRC(msg)
	ser.write(msg)
	crclow = crc & 0xff
	crchigh = (crc >> 8) & 0xff
	ser.write(chr(crclow))
	ser.write(chr(crchigh))

def sendGetData(id):
	msg = (id + '02').decode('hex')
	crc = computeCRC(msg)
	ser.write(msg)
	crclow = crc & 0xff
	crchigh = (crc >> 8) & 0xff
	ser.write(chr(crclow))
	ser.write(chr(crchigh))

def sendListSensors(id):
	msg = (id + '01').decode('hex')
	crc = computeCRC(msg)
	ser.write(msg)
	crclow = crc & 0xff
	crchigh = (crc >> 8) & 0xff
	ser.write(chr(crclow))
	ser.write(chr(crchigh))

thread = threading.Thread(target = readSerial)
thread.start()

while True:
    try:
	x = raw_input('go: ')
	if x == 'q':
		connected = False
		break
	if x.startswith('e'):
		p = x.partition(' ')[2].partition(' ')
		sendEcho(p[0], p[2])
	if x.startswith('g'):
		sendGetData(x.partition(' ')[2])
	if x.startswith('l'):
		sendListSensors(x.partition(' ')[2])
    except KeyboardInterrupt:
        connected = False
        break
    except:
        connected = False
        raise
