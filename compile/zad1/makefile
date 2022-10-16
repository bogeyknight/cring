all: xd.o xd2.o
	g++ xd.o xd2.o -o ldist.e

xd.o: xd.cpp xd2.h
	g++ -c xd.cpp

xd2.o: xd2.cpp xd2.h
	g++ -c xd2.cpp

clean:
	rm -f *.o ldist.e
