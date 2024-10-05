
all: main


BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp


main: BrazoRobotico.o main.o
	g++ -o main BrazoRobotico.o main.o


clean:
	rm -f *.o main

test: all
	./main


