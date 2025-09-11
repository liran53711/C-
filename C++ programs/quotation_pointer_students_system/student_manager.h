//
// Created by li on 25-9-9.
//

#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H
#include<vector>
#include "student.h"
using namespace std;

class student_manager {
private :

  vector<student> studentList;
  vector<student>::iterator current;
public :
  student_manager();
  bool add_student(int id,string name ,int grades[5]);
};



#endif //STUDENT_MANAGER_H
