C = gcc
CXX = g++

SOURCE_C = foo.c
OBJECTS_C = foo.o

SOURCE_CXX = hello.cpp
TARGET = hello
LDFLAGS_COMMON = -std=c++14

all:
	$(C) -c $(SOURCE_C)
	$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) -o $(TARGET)
clean:
	rm -rf *.o $(TARGET)