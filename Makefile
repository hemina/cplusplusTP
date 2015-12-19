hello: Point.o tp.o Compare.o Matrix.o Polygon.o
	g++ -Wall -std=c++11 -o hello tp.o Point.o Polygon.o Compare.o Matrix.o
tp.o: tp.cpp Point.h Polygon.h
	g++ -Wall -std=c++11 -c tp.cpp
Point.o: Point.h Point.cpp
	g++ -Wall -std=c++11 -c Point.cpp
Compare.o: Compare.h Compare.cpp
	g++ -Wall -std=c++11 -c Compare.cpp
Matrix.o: Matrix.h Matrix.cpp
	g++ -Wall -std=c++11 -c Matrix.cpp
Polygon.o: Polygon.h Polygon.cpp Point.h
	g++ -Wall -std=c++11 -c Polygon.cpp
clean:
	rm -rf *.o

