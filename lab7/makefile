main.exe: main.o circle.o func.o
	g++ -o main.exe main.o circle.o func.o

main.o: main.cpp circle.h func.h
	g++ -c main.cpp

circle.o: circle.h circle.cpp
	g++ -c circle.cpp

func.o: func.h func.cpp
	g++ -c func.cpp

compila: main.exe

esegui:
	./main.exe

clean:
	rm *.o