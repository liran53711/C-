//
// Created by li on 25-9-9.
//


#include <iostream>

double getTotal(double prices[],int size );

int main() {
    double prices[] = {3.3, 3.4,13.5};
    std::cout <<getTotal(prices,sizeof ( prices)/sizeof ( double ));
}
double getTotal(double prices[],int size ) {
    double total =0 ;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}