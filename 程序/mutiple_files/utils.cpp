#include "utils.h"
#include <iostream>
#include <algorithm>
#include <cctype>

// IOUtils命名空间的实现

void IOUtils::showMenu() {
    std::cout << "\n=== 计算器程序 ===" << std::endl;
    std::cout << "1. 加法" << std::endl;
    std::cout << "2. 减法" << std::endl;
    std::cout << "3. 乘法" << std::endl;
    std::cout << "4. 除法" << std::endl;
    std::cout << "5. 幂运算" << std::endl;
    std::cout << "6. 阶乘" << std::endl;
    std::cout << "7. 判断质数" << std::endl;
    std::cout << "0. 退出" << std::endl;
    std::cout << "请选择操作: ";
}

int IOUtils::getUserChoice() {
    int choice;
    std::cin >> choice;
    return choice;
}

void IOUtils::getTwoNumbers(double& a, double& b) {
    std::cout << "请输入第一个数: ";
    std::cin >> a;
    std::cout << "请输入第二个数: ";
    std::cin >> b;
}

void IOUtils::showResult(double result) {
    std::cout << "结果: " << result << std::endl;
}

void IOUtils::pause() {
    std::cout << "按回车键继续...";
    std::cin.ignore();
    std::cin.get();
}

// StringUtils命名空间的实现

std::string StringUtils::trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) return "";
    
    size_t end = str.find_last_not_of(" \t\n\r");
    return str.substr(start, end - start + 1);
}

std::string StringUtils::toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

std::string StringUtils::toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
