CXX = g++
CXXFLAGS = -std=c++23 -Wall -ggdb -Og -I ./include -c
OBJS = $(patsubst ./src/%.cxx, ./obj/%.o, $(wildcard ./src/*.cxx))
LIBS = -pthread -lgtest

.PHONY: wrapper all clean

wrapper:
	mkdir -p ./obj
	bear -- make -j $(shell nproc) all

all: $(OBJS)
	$(CXX) $(OBJS) $(LIBS) -o ./a.out

./obj/%.o: ./src/%.cxx
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm ./a.out $(OBJS)
