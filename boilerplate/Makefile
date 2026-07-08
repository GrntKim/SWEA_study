CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -Wpedantic -Wmissing-include-dirs
TARGET = ../build/a.out
SRC = code.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p ../build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	$(TARGET)

.PHONY: all run
