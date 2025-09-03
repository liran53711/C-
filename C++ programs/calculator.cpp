//
// Created by li on 25-9-1.
//


#include<iostream>

void standardInput(int * first ,int *second ) {
    std::cout << "The first number:";
    std::cin >> *first ;
    std::cout << "The second number:";
    std::cin >> *second ;
    std::cout << "\n";


}

int main() {
    std :: cout <<"*****************Calculator****************\n";
    std ::cout <<"chose the operation from (+ - * / sqrt pow):";
    std ::string operation;
    std ::cin >>operation;
    std :: cout <<"\n";
    switch (operation[0]) {
        case '+':
            int *first = new int;
            int *second = new int;
            standardInput(first, second);
            std::cout << *first + *second;

    }


}