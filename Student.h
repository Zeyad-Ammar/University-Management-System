#pragma once
#include<bits/stdc++.h>
#include"Person.h"
using namespace std;

class Student : public Person {
private:
    vector<string>StudentCourses;

public:
    static void getStudentInfo(vector<Student>&);
    static void addCourse(vector<Student>&);
    friend class Administrator;
};
