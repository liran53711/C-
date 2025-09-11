//
// Created by li on 25-9-9.
//

#include "student.h"

 student::student() : name(""),id(0),average(0) {
     for ( int i = 0; i < 5; i++) {
         grades[i] =  0;
     }
 }

student::student(std::string name, int id)  : name(name),id ( id ),average(0) {
     for ( int i = 0; i < 5; i++) {
         grades[i] =  0;
     }
}
student::student(std::string name, int id, const int grades[]) :name(name),id(id){
     double total = 0 ;
     for ( int i = 0; i < 5; i++) {
         student::grades[i] = grades[i];
         total += grades[i] ;
     }
    average = total / 5.0;
}



