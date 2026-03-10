#include "Professor.h"

void Professor::addCourse(vector<Professor>& prof) {
    cout << "You will add a new course .\n";
    cout << "Enter your ID : ";
    string id;
    getline(cin >> ws, id);
    for (auto& nam : prof) {
        if (id == nam.Id) {
            cout << "Enter the Course name to add for Prof.";
            string CourseName;
            getline(cin >> ws, CourseName);
            nam.Courses.push_back(CourseName);
            return;
        }
    }
    cout << "No data for this id go to the administrator \n";
}

void Professor::getProfessorInfo(vector<Professor>& professor)
{
    cout << "Enter your ID : ";
    string id; cin >> id;
    for (auto& prof : professor) {
        if (prof.Id == id) {
            cout << "Professor ID : " << prof.Id << endl;
            cout << "Professor Name : " << prof.Name << endl;
            cout << "Professor email : " << prof.Email << endl;
            cout << "Professor age : " << prof.Age << endl;
            cout << "Professor courses : " << endl;
            for (auto& cour : prof.Courses) {
                cout << "-" << cour << endl;
            }
            return;
        }
    }
    cout << "No data for this id go to the administrator \n";
}
