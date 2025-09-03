#ifndef CALCULATOR_H
#define CALCULATOR_H

// 计算器类的声明
class Calculator {
private:
    double result;  // 存储计算结果

public:
    // 构造函数
    Calculator();
    
    // 基本运算函数声明
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // 获取和设置结果
    double getResult() const;
    void setResult(double value);
    
    // 清零
    void clear();
};

// 独立的工具函数声明
namespace MathUtils {
    double power(double base, double exponent);
    double factorial(int n);
    bool isPrime(int n);
}

#endif // CALCULATOR_H
