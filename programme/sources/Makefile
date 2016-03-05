# makefile temporaire

all: lut
	cp lut ../../lut

test :
	cd ../../Tests;./mktest.sh

lut: main.o
	g++ main.o -o lut

main.o: main.cpp
	g++ -c -Wall main.cpp

clean:
	rm *.o lut
