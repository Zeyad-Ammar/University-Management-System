#pragma once
#include<bits/stdc++.h>
#include"Person.h";
using namespace std;

class Department {
private:
    string Name;
    string Code;
    vector<string> Courses;
    vector<string> Professors;
    string DepartmentHead;

    friend class Administrator;
};
