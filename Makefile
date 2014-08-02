
BUFFERS = rs485_message.proto

# NANO_PB_GEN = ../nanopb/generator/nanopb_generator.py
NANO_PB_GEN = nanopb_generator

all: 
	protoc -obuffer.pb --cpp_out=. --python_out=. $(BUFFERS)
	$(NANO_PB_GEN) -f rs485_message.options buffer.pb
	sed s/\<pb.h\>/\"pb.h\"/g buffer.pb.h > buffer.h
	sed s/buffer.pb.h/buffer.h/g buffer.pb.c > buffer.c
	rm buffer.pb.c buffer.pb.h

clean:
	rm -f *.pb.cc *.pb.h *pb2.py *.pb.c buffer.c buffer.h

