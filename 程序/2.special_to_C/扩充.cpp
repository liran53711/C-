//
// Created by li on 25-9-1.
//

#include <iostream>

//reload with different paramiter
// void print();
// void print(int n);
// void print(std::string s );
//
// double square(double x ) {
//     return x*x;
// }
// double integrate(double (*fp)(double),double a ,double b) {
//     int integral = 0;
//     double head = a;
//     double step = 0.001;
//     double tail = a+step;
//     while(tail <= b) {
//         integral += (*fp)((head+tail)/2)  * step;
//         head += step;
//         tail = head + step;
//     }
//
//     return integral;
// }
//

int main() {
    std::cout << "=== Lambda表达式演示 ===" << std::endl;

    // 1. 最简单的lambda表达式
    auto hello = []() {
        std::cout << "Hello from lambda!" << std::endl;
    };
    hello(); // 调用lambda

    // 2. 带参数的lambda
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;

    // 3. 指定返回类型的lambda
    auto divide = [](double a, double b) -> double {
        if (b != 0) return a / b;
        return 0.0;
    };
    std::cout << "10.0 / 3.0 = " << divide(10.0, 3.0) << std::endl;

    // 4. 捕获外部变量
    int x = 10;
    int y = 20;

    // 按值捕获
    auto capture_by_value = [x, y]() {
        std::cout << "捕获的值: x=" << x << ", y=" << y << std::endl;
    };
    capture_by_value();

    // 按引用捕获
    auto capture_by_ref = [&x, &y]() {
        x += 5;
        y += 10;
        std::cout << "修改后: x=" << x << ", y=" << y << std::endl;
    };
    capture_by_ref();
    std::cout << "外部变量: x=" << x << ", y=" << y << std::endl;

    // 5. 捕获所有变量
    int z = 30;
    auto capture_all = [=]() { // [=]按值捕获所有
        std::cout << "捕获所有变量: x=" << x << ", y=" << y << ", z=" << z << std::endl;
    };
    capture_all();

    // 6. 替代你代码中的square函数
    auto square = [](double x) -> double {
        return x * x;
    };

    // 7. 用lambda改写integrate函数的调用
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

    // 使用lambda函数进行积分计算
    std::cout << "square函数从1到5的积分: " << integrate(square, 1, 5) << std::endl;

    // 8. 直接在函数调用中定义lambda
    std::cout << "立方函数从1到3的积分: " <<
        integrate([](double x) { return x * x * x; }, 1, 3) << std::endl;

    return 0;
}
//-----------------------------------------
// void print() {
//     std::cout<<"print()"<<std::endl;
// }
// void print(int n) {
//     std::cout<<n<<std::endl;
// }
// void print(std::string s ) {
//     std::cout<<s<<std::endl;
// }