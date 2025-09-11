#include <iostream>
#include <string>
using namespace std;

string out ;
void put(int apple_remain, int plate_number, int prev, string path) {

    if ( plate_number == 1 ) {
        if ( apple_remain <= prev) {
            out += path +  to_string(apple_remain) +"\n";
        }
        return;
    }
    for ( int i = min(prev,apple_remain);i>=0;i--) {
        string new_path = path +  to_string(i) +" ";
         put(apple_remain -i,plate_number-1,i,new_path);
    }

}

int main() {
    int apple, plate;
    cin >> apple >> plate;

    put(apple, plate, apple, "");
    cout << out;
    return 0;
}