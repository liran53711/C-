#include <iostream>

int main(){

    auto integrate =[](auto func , double head ,double tail,double step)-> double {
        double integral = 0;
        double a= head ;
        const double half_step = step/2;
        while( a+step <=tail){
            integral += func(a+half_step)*step;
            a+=step;
            }
            return integral;
    } ;


    
    std::cout <<integrate([](double x){return x*x*x;},0,1,0.0001)<<std::endl;






    
}