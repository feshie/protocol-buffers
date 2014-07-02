
BUFFERS = rs485_message.proto

all: 
	protoc --cpp_out=. --python_out=. $(BUFFERS)

clean:
	rm *.pb.cc *.pb.h *pb2.py
