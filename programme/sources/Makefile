# makefile temporaire

all: lut
	cp lut ../../lut

test :
	cd ../../Tests;./mktest.sh

lut: main.o lutin-reader.o
	g++ main.o lutin-reader.o 	-o lut

main.o: main.cpp lutin-reader.h
	g++ -c -Wall main.cpp

lutin-reader.o : lutin-reader.cpp lutin-reader.h
	g++ -c -Wall lutin-reader.cpp

clean:
	rm *.o lut
