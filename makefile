CC:=g++
exe:=main
obj:=*.o *.d
CPPFLAGS = -MP -MD
SRC = $(wildcard *.cpp)
	
all: main

dep: main
main: $(SRC:%.cpp=%.o)
	g++ $(CPPFLAGS) -o $@ $^

-include $(SRC:.cpp=.d)

clean:
	rm -rf $(obj) $(exe)
