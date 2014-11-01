CC=g++ -std=c++0x
AR=ar rcs
#CXXFLAGS=$(shell wx-config --cxxflags)
#LIBS=$(shell wx-config --gl-libs --libs)

PROJECT_FOLDER=$(shell pwd)
TARGET=$(shell basename `pwd`)
LIBTARGET=lib$(shell basename `pwd`.a)

SOURCES=$(wildcard *.cpp src/*.cpp)
OBJ_DIR=obj/Release/
vpath %.o $(OBJ_DIR)
OBJECTS=$(addprefix $(OBJ_DIR), $(SOURCES:%.cpp=%.o))

OBJS=$(wildcard $(OBJ_DIR)src/*.o)
TEST_HEADERS=$(wildcard tests/*.h)
TEST_SOURCE=tests/runner.cpp
TEST_OBJECT=tests/runner.o
TEST_TARGET=$(TARGET)_test
RUN=./$(TEST_TARGET)

$(OBJ_DIR)%.o: %.cpp
	$(CC) -c -o $@ $<

all: $(SOURCES) $(TARGET)
    
$(OBJECTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir obj
	mkdir $@

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

clean:
	rm $(OBJECTS)

# Build static library
lib: $(SOURCES) $(LIBTARGET)

$(LIBTARGET): $(OBJECTS)
	$(AR) $@ $(OBJECTS)

mytests: $(TEST_TARGET)
	$(RUN)

$(TEST_SOURCE): $(TEST_HEADERS)
	cxxtestgen --error-printer -o $@ $(TEST_HEADERS)

$(TEST_TARGET): $(TEST_SOURCE)
	$(CC) -c -o $(TEST_OBJECT) $(TEST_SOURCE)
	$(CC) -o $(TEST_TARGET) $(TEST_OBJECT) $(OBJS)
