#include <iostream>

int main() {
    std::cout << "=== 超简单Lambda教程 ===" << std::endl;
    
    // 传统方式：写一个函数
    // int add(int a, int b) { return a + b; }
    
    // Lambda方式：临时写一个小函数
    auto add = [](int a, int b) {
        return a + b;
    };
    
    // 使用这个临时函数
    int result = add(3, 5);
    std::cout << "3 + 5 = " << result << std::endl;
    
    // 更简单的例子：打招呼
    auto sayHello = []() {
        std::cout << "你好！" << std::endl;
    };
    
    sayHello(); // 调用这个临时函数
    
    return 0;
}
