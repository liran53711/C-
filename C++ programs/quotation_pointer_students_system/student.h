//
// Created by li on 25-9-9.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>


class student {


    private:
    std :: string name;
    int id ;
    int grades[5];
    float average;

public :
    student();
    student(std:: string name,int id );
    student(std:: string name, int id, const int grades[]);




};



#endif //STUDENT_H
