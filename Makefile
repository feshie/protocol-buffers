
BUFFERS = rs485_message.proto
NANO_PB_GEN = ../nanopb/generator/nanopb_generator.py
all: 
	protoc -obuffer.pb --cpp_out=. --python_out=. $(BUFFERS)
	$(NANO_PB_GEN)  buffer.pb

clean:
	rm *.pb.cc *.pb.h *pb2.py *.pb.c 

