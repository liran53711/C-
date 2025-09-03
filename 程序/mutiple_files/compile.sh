#!/bin/bash

# 编译多文件C++程序的脚本

echo "开始编译多文件C++程序..."

# 方法1: 使用Makefile
if [ -f "Makefile" ]; then
    echo "使用Makefile编译..."
    make clean
    make
else
    # 方法2: 直接使用g++编译
    echo "直接使用g++编译..."
    g++ -std=c++11 -Wall -Wextra main.cpp calculator.cpp utils.cpp -o calculator
fi

# 检查编译是否成功
if [ $? -eq 0 ]; then
    echo "编译成功! 可执行文件: calculator"
    echo "运行程序请输入: ./calculator"
else
    echo "编译失败!"
    exit 1
fi
