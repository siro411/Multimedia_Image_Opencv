PHONY: all

#exercise: complete the make file

all: clean function1.a function2.a function3.a function4.a function5.a function6.a function7.a function8.a 
	g++ -std=c++1y -o project.o -c project.cpp -Wall -O `pkg-config --cflags --libs opencv` -I.
	g++ -o project project.o `pkg-config --cflags --libs opencv` -L.  -lfunction

function1.a:
	g++ -std=c++1y -o resize.o -c resize.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o resize resize.o `pkg-config --cflags --libs opencv`
function2.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function3.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function4.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function5.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function6.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function7.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
function8.a:
	g++ -std=c++1y -o dilation.o -c dilation.cpp -Wall -O `pkg-config --cflags --libs opencv` -I .
	g++ -o dilation dilation.o `pkg-config --cflags --libs opencv`
clean:
	rm -f *.o project 

