gr.o: Button.o Slider.o Widget.o main.o
	g++ -Wall -std=c++11 -o main Button.o Slider.o Widget.o main.o 
main.o: main.cpp Widget.h Button.h Slider.h
	g++ -Wall -std=c++11 -c main.cpp
Button.o: Button.h Button.cpp Widget.h
	g++ -Wall -std=c++11 -c Button.cpp
Slider.o: Slider.h Slider.cpp Widget.h
	g++ -Wall -std=c++11 -c Slider.cpp 
Widget.o: Widget.h Widget.cpp
	g++ -Wall -std=c++11 -c Widget.cpp
clean:
	rm -rf *.o

