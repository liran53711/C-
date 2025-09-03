//
// Created by li on 25-9-1.
//
#include <iostream>

int main() {
    int correct = 8;
    int questions =10;
    double score1 = correct/questions;
    double score2 = correct/(double)questions;
    std::cout<<score1*100<<"%"<<std::endl;
    std::cout<<score2*100<<"%"<<std::endl;
}