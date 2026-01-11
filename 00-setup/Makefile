CXX := g++  #global specifier for the cpp comiler to be used i this case g++
CXXFLAGS := -std=c++20 -Wall -Wextra -Wpedantic -g  #stores flag options for the compiler 
TARGET := main # the name of the final executable
SRC := main.cpp  # name of the source code file 
OBJ := $(SRC:.cpp=.o)  # generates object files by replacing the  .cpp in source files to .o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp #each .0 file depends on its .cpp file
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)   #allow us to execute the program ensuring executabl is up-to-date
	./$(TARGET)

clean:  #removes all object targets and executables 
	rm -f $(OBJ) $(TARGET)  

rebuild: clean all  #removes all compiled files
