# makefile temporaire

all: lut
	cp lut ../../lut

test :
	cd ../../Tests;./mktest.sh

lut: main.o lutin-reader.o symbole.o automate.o lexer.o
	g++ -std=c++11 main.o lutin-reader.o symbole.o automate.o lexer.o -o lut

main.o: main.cpp lutin-reader.h
	g++ -std=c++11 -c -Wall main.cpp

lutin-reader.o : lutin-reader.cpp lutin-reader.h
	g++  -std=c++11-c -Wall lutin-reader.cpp

automate.o : automate.cpp automate.h
	g++  -std=c++11 -c -Wall automate.cpp

symbole.o : symbole.cpp symbole.h
	g++ -std=c++11 -c -Wall symbole.cpp

lexer.o : lexer.cpp lexer.h
	g++ -std=c++11 -c -Wall lexer.cpp

clean:
	rm *.o lut
