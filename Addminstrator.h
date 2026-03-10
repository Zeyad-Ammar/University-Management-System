#pragma once
#include<bits/stdc++.h>
#include "Course.h"
#include "Department.h"
#include "Student.h"
#include "Professor.h"
using namespace std;

class Administrator : public Person {
private:

public:
    static Course addCourses(Course&);

    static void getData(vector<Course>&);

    static Department addDepartment(Department&);

    static void getData(vector<Department>&);

    static Student addStudents(Student&);

    static void getData(vector<Student>&);

    static Professor addProfessor(Professor&);

    static void getData(vector<Professor>&);

    friend class Manger;
};
