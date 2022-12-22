points.exe: points.o geometry.o math.o
	g++ -o points.exe points.o geometry.o math.o

points.o: points.cpp geometry.h
	g++ -c points.cpp

geometry.o: geometry.h geometry.cpp
	g++ -c geometry.cpp

math.o: math.h math.cpp
	g++ -c math.cpp

compila: points.exe

esegui:
	./points.exe

clean:
	rm *.o