//
// Created by li on 25-9-8.
//

#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>


enum Quality {
    green = 0,
    blue = 1,
    purple = 2,
    orange = 3,

};


class Inventory {

    std:: vector<std::vector<int>> items;
    void cateExist(int cate);
    std :: pair <int,int> calcuMax(int lowQualityCount);

public :
    Inventory();
    void addItem(int cate,int qual,int delta);
    void queryItem(int cate,int*result);
    bool mix(int cate,const int*required,int * consumed);
    void consume(const std::vector<std::vector<int>> & options);

};






#endif //INVENTORY_H
