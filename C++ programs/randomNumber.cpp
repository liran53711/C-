//
// Created by li on 25-9-1.
//
#include <iostream>
#include <ctime>
int main() {
    srand(time(NULL));
    int random = rand()%100+1;
    int tries  = 0 ;
    int head = 1 ;
    int tail = 100;
    int guess = (head + tail)/2;
    while ( guess != random ) {
        tries ++;
        if ( guess > random ) {
            tail = guess;
        }else {
            head = guess;
        }
        guess = (head + tail )/2;
    }
    std :: cout << tries << " tries guessed in " << guess << std::endl;
}
