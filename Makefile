CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g

SRC = main.cpp Editor.cpp Buffer.cpp Terminal.cpp
OUT = mini-editor

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
