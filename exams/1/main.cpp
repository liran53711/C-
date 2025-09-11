#include<iostream>
using namespace std;





void exploreDungeon(int n, int d) {
    Printer p(d);
    if (d >= n) {
        return ;
    } else {
        exploreDungeon(n, d + 1);
    }
}



int main() {

}
