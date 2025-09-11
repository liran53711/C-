#include <iostream>

#include "inventory.h"

int main() {

    Inventory inventory;

    int request;
    while (true) {
        std :: cin >> request;

        if  (request == -1) {
            break;
        }
        switch (request) {
            case 1: {
                int category ,quality,delta;
                std::cin >> category >> quality >> delta;
                inventory.addItem(category,quality,delta);
                break;
            }
            case 2 : {
                int cate;
                std::cin >> cate;
                int result[4];
                inventory.queryItem(cate, result);
                for (int i = 0; i < 4; i++) {
                    if (i > 0) std::cout << " ";
                    std::cout << result[i];
                }
                std::cout << std::endl;
                break;
            }
            case 3 : {
                int cate,required[4];
                std :: cin >> cate >> required[0] >> required[1] >> required[2] >> required[3];
                int consumed[4];
                bool success = inventory.mix(cate,required,consumed);
                if (success) {
                    for  (int i = 0; i < 4; i++) {
                        if (i > 0) std::cout << " ";
                        std::cout << consumed[i];
                    }
                }else {
                    std::cout << "-1 -1 -1 -1";
                }
                std::cout << std::endl;
                break;
            }

            case 4 : {
                std::vector<std::vector<int>> operations;
                while (true) {
                    int category;
                    std::cin >> category;
                    if (category == -1) {
                        break;
                    }

                    std::vector<int> op(5);
                    op[0] = category;
                    for (int i = 1; i < 5; i++) {
                        std::cin >> op[i];
                    }
                    operations.push_back(op);
                }
                inventory.consume(operations);
                break;
            }



        }
    }

    return 0 ;
}




