CXX := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -Wpedantic -g
TARGET := app
SRC := main.cpp \
       examples/if_else.cpp   examples/loops.cpp examples/case.cpp examples/break_continue.cpp
OBJ := $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all
