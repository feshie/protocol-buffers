
BUFFERS = rs485_message.proto settings.proto readings.proto

# NANO_PB_GEN = ../nanopb/generator/nanopb_generator.py
NANO_PB_GEN = nanopb_generator

all: rs485-message settings readings

rs485-message:
	protoc -obuffer.pb --python_out=. rs485_message.proto
	$(NANO_PB_GEN) -f rs485_message.options buffer.pb
	sed s/\<pb.h\>/\"pb.h\"/g buffer.pb.h > buffer.h
	sed s/buffer.pb.h/buffer.h/g buffer.pb.c > buffer.c
	rm buffer.pb.c buffer.pb.h
	cp buffer.c rs485_message.pb.c
	sed s/buffer.h/rs485_message.pb.h/g buffer.c > rs485_message.pb.c
	cp buffer.h rs485_message.pb.h

settings:
	protoc -osettings.pb --cpp_out=. --python_out=. settings.proto
	$(NANO_PB_GEN) settings.pb
	sed s/\<pb.h\>/\"pb.h\"/g settings.pb.h > settings.pb.h.1
	mv settings.pb.h.1 settings.pb.h

readings:
	protoc -oreadings.pb --cpp_out=. --python_out=. readings.proto
	$(NANO_PB_GEN) readings.pb
	sed s/\<pb.h\>/\"pb.h\"/g readings.pb.h > readings.pb.h.1
	mv readings.pb.h.1 readings.pb.h

clean:
	rm -f *.pb.cc *.pb.h *pb2.py *.pb.c buffer.c buffer.h

