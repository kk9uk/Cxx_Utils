CXX = g++
CXXFLAGS = -std=c++23 -Wall -ggdb -fsanitize=address -Og -I ./include -c
OBJS = $(patsubst ./src/%.cxx, ./obj/%.o, $(wildcard ./src/*.cxx))
LIBS = -fsanitize=address -pthread -lgtest

bear:
	bear -- make all

all: $(OBJS)
	$(CXX) $(OBJS) $(LIBS) -o ./a.out

./obj/%.o: ./src/%.cxx
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm ./a.out $(OBJS)
