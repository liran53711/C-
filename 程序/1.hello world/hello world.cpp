
#include <iostream>


int &f();
int &g();
int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << f()+g()<<std::endl;


    return 0;
}


int & f() {
    int i=1;
    return i;

}

int & g() {
    int j=1;
    return j;
}