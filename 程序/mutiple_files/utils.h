#ifndef UTILS_H
#define UTILS_H

#include <string>

// 输入输出工具函数
namespace IOUtils {
    // 显示菜单
    void showMenu();
    
    // 获取用户选择
    int getUserChoice();
    
    // 获取两个数字
    void getTwoNumbers(double& a, double& b);
    
    // 显示结果
    void showResult(double result);
    
    // 暂停程序
    void pause();
}

// 字符串工具函数
namespace StringUtils {
    // 去除字符串两端空格
    std::string trim(const std::string& str);
    
    // 转换为大写
    std::string toUpper(const std::string& str);
    
    // 转换为小写
    std::string toLower(const std::string& str);
}

#endif // UTILS_H
