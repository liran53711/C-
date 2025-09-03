//
// Created by li on 25-9-1.
//
#include <iostream>

int main () {
    std:: string name = "Li Ran";
   std::cout <<name <<std::endl;
    name.append( " China");
    std::cout << name << std::endl;
    std::cout <<name.at(3)<<"\n";
    std ::cout << name.back()<<"\n";
    std::cout <<name.erase(3)<<"\n";

}