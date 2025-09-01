#include <iostream>
#include <stack>
#include <string>

int main() {
    std::cout << "=== C++ Stack 使用演示 ===" << std::endl;
    
    // 1. 创建一个整数栈
    std::stack<int> intStack;
    
    // 2. 向栈中添加元素 (push)
    std::cout << "\n--- 添加元素到栈中 ---" << std::endl;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    std::cout << "添加了: 10, 20, 30" << std::endl;
    std::cout << "栈的大小: " << intStack.size() << std::endl;
    
    // 3. 查看栈顶元素 (top)
    std::cout << "\n--- 查看栈顶元素 ---" << std::endl;
    std::cout << "栈顶元素: " << intStack.top() << std::endl;
    
    // 4. 从栈中移除元素 (pop)
    std::cout << "\n--- 从栈中移除元素 ---" << std::endl;
    while (!intStack.empty()) {
        std::cout << "移除: " << intStack.top() << std::endl;
        intStack.pop();  // 注意：pop()不返回值，只是移除
        std::cout << "剩余元素数量: " << intStack.size() << std::endl;
    }
    
    // 5. 检查栈是否为空
    std::cout << "\n--- 检查栈状态 ---" << std::endl;
    if (intStack.empty()) {
        std::cout << "栈现在是空的" << std::endl;
    }
    
    // 6. 字符串栈示例
    std::cout << "\n--- 字符串栈示例 ---" << std::endl;
    std::stack<std::string> stringStack;
    stringStack.push("第一个");
    stringStack.push("第二个");
    stringStack.push("第三个");
    
    std::cout << "字符串栈内容（从顶到底）：" << std::endl;
    std::stack<std::string> tempStack = stringStack; // 复制栈用于显示
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << std::endl;
        tempStack.pop();
    }
    
    // 7. 实际应用：括号匹配检查
    std::cout << "\n--- 实际应用：括号匹配 ---" << std::endl;
    auto checkBrackets = [](const std::string& str) -> bool {
        std::stack<char> bracketStack;
        
        for (char c : str) {
            if (c == '(' || c == '[' || c == '{') {
                bracketStack.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (bracketStack.empty()) return false;
                
                char top = bracketStack.top();
                bracketStack.pop();
                
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        
        return bracketStack.empty();
    };
    
    std::string test1 = "((()))";
    std::string test2 = "([{}])";
    std::string test3 = "((()]";
    
    std::cout << test1 << " 括号匹配: " << (checkBrackets(test1) ? "正确" : "错误") << std::endl;
    std::cout << test2 << " 括号匹配: " << (checkBrackets(test2) ? "正确" : "错误") << std::endl;
    std::cout << test3 << " 括号匹配: " << (checkBrackets(test3) ? "正确" : "错误") << std::endl;
    
    return 0;
}
