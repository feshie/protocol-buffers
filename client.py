import sys
import serial
import python.rs485_message_pb2

from google.protobuf import message

ser = serial.Serial(sys.argv[1], sys.argv[2], timeout=1)

while True:
	try:
		s = ser.read(512)
		if len(s)>0:
			rs485 = rs485_message_pb2.Rs485()
			rs485.ParseFromString(s)
			print rs485
	except message.DecodeError:
		print "Decode error (probably a partial message)"

ser.close()
