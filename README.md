protocol-buffers
================

The definitions of the protocol buffers that can be used on multiple platforms.

There are seperate directories for every target language (currently c and python).
C projects only need to pull in all.c, it includes the source for every generated message.

This repo should probably be added to the project as a submodule:

    git submodule add git@github.com:feshie/protocol-buffers.git
    git submodule update --init --recursive

to test rs485 sensors use:
python ./client2.py /dev/ttyUSB0 9600
then try getting data with ID param (make sure 1 is 01)
g 01
g 20

