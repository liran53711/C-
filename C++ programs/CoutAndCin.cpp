//
// Created by li on 25-9-1.
//

#include <iostream>

int main() {
    std::string name;
    std::cin >> name;
    std::cout << name << std::endl;
    std::cout <<"-----------------------------------------";
//you can use std::getline(std:;cin>>std ::ws ,name) to get a string with spase inside and ignore the head '\n' or space.

    std::getline ( std::cin >> std ::ws,name);
    std ::cout << name << std::endl;
}


