#include "Student.h"

void Student::getStudentInfo(vector<Student>& student) {
    cout << "Enter your ID : ";
    string id; cin >> id;
    for (auto& st : student) {
        if (st.Id == id) {
            cout << "Student ID : " << st.Id << endl;
            cout << "Student Name : " << st.Name << endl;
            cout << "Student email : " << st.Email << endl;
            cout << "Student age : " << st.Age << endl;
            cout << "Student courses : " << endl;
            for (auto& course : st.StudentCourses) {
                cout << "-" << course << endl;
            }
            return;
        }
    }
    cout << "No data for this id go to the administrator  \n";
}
void Student::addCourse(vector<Student>& student) {
    cout << "Enter your ID : ";
    string id; cin >> id;
    for (auto& st : student) {
        if (id == st.Id) {
            cout << "How many course you will add : ";
            int n; cin >> n;
            cout << "Enter " << n << " courses\n";
            while (n--) {
                string course;
                getline(cin >> ws, course);
                st.StudentCourses.push_back(course);
            }
            return;
        }
    }
    cout << "No data for this id go to the administrator \n";
}
