#include <iostream>
#include "calculator.h"
#include "utils.h"

int main() {
    Calculator calc;  // 创建计算器对象
    int choice;
    double a, b, result;
    int n;

    std::cout << "欢迎使用多文件C++计算器程序!" << std::endl;

    do {
        IOUtils::showMenu();
        choice = IOUtils::getUserChoice();

        switch (choice) {
            case 1:  // 加法
                IOUtils::getTwoNumbers(a, b);
                result = calc.add(a, b);
                IOUtils::showResult(result);
                break;

            case 2:  // 减法
                IOUtils::getTwoNumbers(a, b);
                result = calc.subtract(a, b);
                IOUtils::showResult(result);
                break;

            case 3:  // 乘法
                IOUtils::getTwoNumbers(a, b);
                result = calc.multiply(a, b);
                IOUtils::showResult(result);
                break;

            case 4:  // 除法
                try {
                    IOUtils::getTwoNumbers(a, b);
                    result = calc.divide(a, b);
                    IOUtils::showResult(result);
                } catch (const std::exception& e) {
                    std::cout << "错误: " << e.what() << std::endl;
                }
                break;

            case 5:  // 幂运算
                IOUtils::getTwoNumbers(a, b);
                result = MathUtils::power(a, b);
                IOUtils::showResult(result);
                break;

            case 6:  // 阶乘
                std::cout << "请输入一个整数: ";
                std::cin >> n;
                try {
                    result = MathUtils::factorial(n);
                    IOUtils::showResult(result);
                } catch (const std::exception& e) {
                    std::cout << "错误: " << e.what() << std::endl;
                }
                break;

            case 7:  // 判断质数
                std::cout << "请输入一个整数: ";
                std::cin >> n;
                if (MathUtils::isPrime(n)) {
                    std::cout << n << " 是质数" << std::endl;
                } else {
                    std::cout << n << " 不是质数" << std::endl;
                }
                break;

            case 0:  // 退出
                std::cout << "谢谢使用!" << std::endl;
                break;

            default:
                std::cout << "无效选择，请重新输入!" << std::endl;
                break;
        }

        if (choice != 0) {
            IOUtils::pause();
        }

    } while (choice != 0);

    return 0;
}