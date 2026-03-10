#pragma once
#include<bits/stdc++.h>
#include"Person.h"

using namespace std;

class Professor : public Person {
private:
    vector<string> Courses;

public:
    static void addCourse(vector<Professor>&);
    static void getProfessorInfo(vector<Professor>&);

    friend class Administrator;
};
