#include "calculator.h"
#include <stdexcept>
#include <cmath>

// Calculator类的实现

// 构造函数
Calculator::Calculator() : result(0.0) {
    // 初始化结果为0
}

// 加法
double Calculator::add(double a, double b) {
    result = a + b;
    return result;
}

// 减法
double Calculator::subtract(double a, double b) {
    result = a - b;
    return result;
}

// 乘法
double Calculator::multiply(double a, double b) {
    result = a * b;
    return result;
}

// 除法
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("除数不能为零!");
    }
    result = a / b;
    return result;
}

// 获取结果
double Calculator::getResult() const {
    return result;
}

// 设置结果
void Calculator::setResult(double value) {
    result = value;
}

// 清零
void Calculator::clear() {
    result = 0.0;
}

// MathUtils命名空间的实现

// 幂运算
double MathUtils::power(double base, double exponent) {
    return std::pow(base, exponent);
}

// 阶乘
double MathUtils::factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("阶乘的参数不能为负数!");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 判断是否为质数
bool MathUtils::isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
