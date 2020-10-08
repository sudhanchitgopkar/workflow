main: bitsum.o bitsum.h main.cpp
	g++ -std=c++14 -Wall -pedantic-errors -o main bitsum.o main.cpp

bitsum.o: bitsum.h bitsum.cpp
	g++ -std=c++14 -Wall -pedantic-errors -c bitsum.cpp

clean:
	/bin/rm -f *.o main

