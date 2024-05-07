bear:
	bear -- make all

all: main.cxx
	g++ -std=c++23 -Wall -ggdb -fsanitize=address -Og -I ./include ./main.cxx -o ./a.out
