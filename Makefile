add.o: add.cpp linklist.h  
	g++ --std=c++14 -c add.cpp	
print.o: linklist.h print.cpp
	g++ --std=c++14 -c print.cpp
main.o: main.cpp linklist.h
	g++ --std=c++14 -c main.cpp
linklist.out: main.o add.o print.o
	g++ main.o add.o print.o -o linklist.out
