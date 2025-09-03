#!/bin/bash

# 通用C++多文件编译脚本

echo "🔨 开始编译C++项目..."

# 检查是否有CMakeLists.txt
if [ -f "CMakeLists.txt" ]; then
    echo "📁 发现CMakeLists.txt，使用CMake编译..."
    mkdir -p build
    cd build
    cmake ..
    make
    cd ..
    echo "✅ CMake编译完成！"
    
# 检查是否有Makefile
elif [ -f "Makefile" ]; then
    echo "📁 发现Makefile，使用make编译..."
    make
    echo "✅ Make编译完成！"
    
# 否则直接编译所有cpp文件
else
    echo "📁 直接编译所有cpp文件..."
    clang++ -std=c++11 -Wall -g *.cpp -o program
    echo "✅ 直接编译完成！可执行文件：program"
fi

echo "🎉 编译成功！"
