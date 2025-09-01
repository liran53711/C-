#include <iostream>

int main() {
    std::cout << "=== Lambda积分函数演示 ===" << std::endl;
    
    // 1. 把积分函数改写成Lambda
    auto integrate = [](auto func, double a, double b) -> double {
        double integral = 0;
        double head = a;
        double step = 0.001;
        double tail = a + step;
        while(tail <= b) {
            integral += func((head + tail) / 2) * step;
            head += step;
            tail = head + step;
        }
        return integral;
    };
    
    // 2. 把square函数改写成Lambda
    auto square = [](double x) -> double {
        return x * x;
    };
    
    // 3. 使用Lambda函数计算积分
    double result1 = integrate(square, 1, 5);
    std::cout << "x²从1到5的积分 = " << result1 << std::endl;
    
    // 4. 直接在函数调用中写Lambda（更简洁！）
    double result2 = integrate([](double x) { return x * x * x; }, 1, 3);
    std::cout << "x³从1到3的积分 = " << result2 << std::endl;
    
    // 5. 更多例子
    // 计算 sin(x) 的积分（需要 #include <cmath>）
    // double result3 = integrate([](double x) {return sin(x);}, 0, 3.14159);
    
    // 计算 2x + 1 的积分
    double result4 = integrate([](double x) { return 2*x + 1; }, 0, 2);
    std::cout << "2x+1从0到2的积分 = " << result4 << std::endl;
    
    return 0;
}
