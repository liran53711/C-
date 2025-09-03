# Makefile for multi-file C++ program

# 编译器和编译选项
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# 目标可执行文件名
TARGET = calculator

# 源文件
SOURCES = main.cpp calculator.cpp utils.cpp

# 目标文件
OBJECTS = $(SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# 编译源文件生成目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJECTS) $(TARGET)

# 运行程序
run: $(TARGET)
	./$(TARGET)

# 声明伪目标
.PHONY: all clean run
