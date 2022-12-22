main.exe: main.o complex.o func.o
	g++ -o main.exe main.o complex.o func.o

main.o: complex.h func.h
	g++ -c main.cpp

complex.o: complex.h complex.cpp
	g++ -c complex.cpp

func.o: func.h func.cpp
	g++ -c func.cpp

compila: main.exe

esegui:
	./main.exe

clean:
	rm *.o