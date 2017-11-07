#ifndef _STUDENT_H
#define _STUDENT_H
#include<iostream>
using namespace std;
#include<cstring>
#include<vector>
class Student{
public:
    Student();
    Student(int no,string){
        

    }


private:
    int num=0;
    string name;
    vector<string> classes;
};





#endif
