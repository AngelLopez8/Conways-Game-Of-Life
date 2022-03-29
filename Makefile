CXX = g++
LIB_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system
INCLUDE = include/
SRC = src/
FILES = $(SRC)Cell.cpp $(SRC)World.cpp $(SRC)Window.cpp
TABFILES = $(SRC)Tabs/Tab.cpp

Main: Main.cpp
	$(CXX) Main.cpp $(FILES) $(TABFILES) -o Main $(LIB_FLAGS)