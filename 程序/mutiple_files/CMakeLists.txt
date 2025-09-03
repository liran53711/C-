cmake_minimum_required(VERSION 3.10)

# 项目名称和版本
project(Calculator VERSION 1.0.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 编译选项
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# 源文件列表
set(SOURCES
    main.cpp
    calculator.cpp
    utils.cpp
)

# 头文件列表
set(HEADERS
    calculator.h
    utils.h
)

# 添加可执行文件
add_executable(calculator ${SOURCES})

# 设置输出目录
set_target_properties(calculator PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# 如果需要链接数学库（某些系统需要）
# target_link_libraries(calculator m)

# 安装规则（可选）
install(TARGETS calculator DESTINATION bin)
