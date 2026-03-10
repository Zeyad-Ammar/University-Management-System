#include "Addminstrator.h"

Course Administrator::addCourses(Course& course) {
    cout << "Enter Course code : ";
    cin >> course.Code;
    cout << "Enter Course name : ";
    getline(cin >> ws, course.Name);
    cout << "Enter Professor name who teached a " << course.Name << " course : ";
    getline(cin >> ws, course.Professor);
    cout << "How many Student in a " << course.Name << " Course ? ";
    int n;
    cin >> n;
    cout << "Enter " << n << " Student :\n";
    while (n--) {
        string std;
        getline(cin >> ws, std);
        course.Students.push_back(std);
    }
    return course;
}

void Administrator::getData(vector<Course>& course) {
    if (course.empty())
    {
        cout << "No there any course go to add course from Admin \n";
        return;
    }
    for (auto& cour : course) {
        cout << " Course code :" << cour.Code << endl;
        cout << " Course name : " << cour.Name << endl;
        cout << " The course professor name : \n";
        cout << "-" << cour.Professor << endl;
        cout << " The course students : \n";
        for (const auto& i : cour.Students) {
            cout << "-" << i << endl;
        }
        cout << "_______________________________________________\n";
    }
}

Department Administrator::addDepartment(Department& department) {
    cout << "Enter Department code : ";
    cin >> department.Code;
    cout << "Enter Department name : ";
    getline(cin >> ws, department.Name);
    cout << "Enter Department head : ";
    getline(cin >> ws, department.DepartmentHead);
    cout << "How many Professor in a " << department.Name << " Department ? ";
    int n;
    cin >> n;
    cout << "Enter " << n << " Professor : \n";
    while (n--) {
        string prof;
        getline(cin >> ws, prof);
        department.Professors.push_back(prof);
    }
    cout << "How many Course in a " << department.Name << " Department ? ";
    cin >> n;
    cout << "Enter " << n << " Course \n";
    while (n--) {
        string cour;
        getline(cin >> ws, cour);
        department.Courses.push_back(cour);
    }
    return department;
}

void Administrator::getData(vector<Department>& department) {
    if (department.empty())
    {
        cout << "No there any department go to add department from Admin \n";
        return;
    }
    for (auto& depart : department) {
        cout << "Department code : " << depart.Code << endl;
        cout << "Department name : " << depart.Name << endl;
        cout << "Department head : " << depart.DepartmentHead << endl;
        cout << "Department courses : \n";
        for (auto& i : depart.Courses) {
            cout << "-" << i << endl;
        }
        cout << "Department professor : \n";
        for (auto& i : depart.Professors) {
            cout << "-" << i << endl;
        }
        cout << "_______________________________________________\n";
    }
}

Student Administrator::addStudents(Student& student) {
    cout << "Enter Student ID : ";
    cin >> student.Id;
    cout << "Enter Student name : ";
    getline(cin >> ws, student.Name);
    cout << "Enter Student email : ";
    cin >> student.Email;
    cout << "Enter Student age : ";
    cin >> student.Age;
    cout << "How many course the student " << student.Name << " study ? ";
    int n;
    cin >> n;
    cout << "Enter " << n << " Courses \n";
    while (n--) {
        string cou;
        getline(cin >> ws, cou);
        student.StudentCourses.push_back(cou);
    }
    return student;
}


void Administrator::getData(vector<Student>& student) {
    if (student.empty())
    {
        cout << "No there any student go to add student from Admin \n";
        return;
    }
    for (auto& std : student) {
        cout << "Student ID : " << std.Id << endl;
        cout << "Student Name : " << std.Name << endl;
        cout << "Student email : " << std.Email << endl;
        cout << "Student age : " << std.Age << endl;
        cout << "Student courses : " << endl;
        for (auto& course : std.StudentCourses) {
            cout << "-" << course << endl;
        }
        cout << "_______________________________________________\n";
    }
}


Professor Administrator::addProfessor(Professor& professor) {
    cout << "Enter Professors ID : ";
    cin >> professor.Id;
    cout << "Enter Professors name : ";
    getline(cin >> ws, professor.Name);
    cout << "Enter Professors email : ";
    cin >> professor.Email;
    cout << "Enter Professors age : ";
    cin >> professor.Age;
    cout << "How many course Prof." << professor.Name << " studied ? ";
    int n;
    cin >> n;
    cout << "Enter " << n << " Courses \n";
    while (n--) {
        string cou;
        getline(cin >> ws, cou);
        professor.Courses.push_back(cou);
    }
    return professor;
}

void Administrator::getData(vector<Professor>& professor) {
    if (professor.empty())
    {
        cout << "No there any professor go to add professor from Admin \n";
        return;
    }
    for (auto& prof : professor) {
        cout << "Professor ID : " << prof.Id << endl;
        cout << "Professor Name : " << prof.Name << endl;
        cout << "Professor email : " << prof.Email << endl;
        cout << "Professor age : " << prof.Age << endl;
        cout << "Professor courses : " << endl;
        for (auto& course : prof.Courses) {
            cout << "-" << course << endl;
        }
        cout << "_______________________________________________\n";
    }
}
