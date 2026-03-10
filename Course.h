#pragma once
#include<bits/stdc++.h>
#include"Person.h"
using namespace std;
class Course {
private:
    string Name;
    string Code;
    vector<string> Students;
    string Professor;
    friend class Administrator;


};
