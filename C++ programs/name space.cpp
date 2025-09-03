//
// Created by li on 25-9-1.
//


#include <iostream>

namespace first {
    int x= 1;

}
namespace second {
    int x= 2;
}

int main() {
    using namespace first ;
    //using namespace std;
    std::cout <<x<<std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    int x= 0;
    std::cout << "No namespace: "<<x<<"\n"<<"The first namespace: "<<first::x<<"\n"<<"The second namespace: "<<second::x<<std::endl;
    std::cout << "-------------------------------------------------------"<<std::endl;








}
