bear:
	bear -- make all

all: main.cxx
	g++ -std=c++23 -Wall -ggdb -Og -I ./include ./main.cxx -o ./a.out
