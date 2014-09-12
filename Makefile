
BUFFERS = rs485_message.proto settings.proto readings.proto

# NANO_PB_GEN = ../nanopb/generator/nanopb_generator.py
NANO_PB_GEN = nanopb_generator

all: rs485-message settings readings

rs485-message:
	protoc -obuffer.pb --cpp_out=. --python_out=. rs485_message.proto
	$(NANO_PB_GEN) -f rs485_message.options buffer.pb
	sed s/\<pb.h\>/\"pb.h\"/g buffer.pb.h > buffer.h
	sed s/buffer.pb.h/buffer.h/g buffer.pb.c > buffer.c
	rm buffer.pb.c buffer.pb.h

settings:
	protoc -osettings.pb --cpp_out=. --python_out=. settings.proto
	$(NANO_PB_GEN) settings.pb

readings:
	protoc -oreadings.pb --cpp_out=. --python_out=. readings.proto
	$(NANO_PB_GEN) readings.pb
clean:
	rm -f *.pb.cc *.pb.h *pb2.py *.pb.c buffer.c buffer.h

