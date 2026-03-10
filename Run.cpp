#include <bits/stdc++.h>
#include"Addminstrator.h"
#include"Course.h"
#include"Department.h"
#include"Manager.h"
#include"Professor.h"
#include"Student.h"
using namespace std;
class Run {
public:
    static void run() {
        vector<Administrator> administrator;
        vector<Professor> professor;
        vector<Student> student;
        vector<Course> course;
        vector<Department> department;
        cout << " ===* Hello, welcome in University System ==*= \n";
        char c = 'Y';

        while (c == 'y' || c == 'Y') {
            cout << "______________________\n";
            cout << "[1]: Manager\n[2]: Administrator\n[3]: Professor\n[4]: Student\n";
            cout << "______________________\n";

            cout << "Enter your choose from [1 to 4] :  ";
            enum class enMainWindowOption {
                MANAGER = '1', ADMINSTERATOR, PROFESSOR, STUDENT
            };

            char chose;
            cin >> chose;

            auto choose = (enMainWindowOption)chose;
            if (choose == enMainWindowOption::MANAGER) {
                system("cls");
                printf("___________________________\n");
                cout << "[1]: Add Administrator\n[2]: Get Administrator Info\n";
                cout << "__________________________\n";

                enum class enManagerMenu {
                    ADDADMIN = '1', GETADMININFO
                };

                cout << "Enter your choose form [1 to 2]  :  ";
                cin >> chose;
                enManagerMenu choose = (enManagerMenu)chose;

                if (choose == enManagerMenu::ADDADMIN) {
                    Administrator admin;
                    Manger::addAdministrator(admin);
                    administrator.push_back(admin);
                }

                else if (choose == enManagerMenu::GETADMININFO) {
                    Manger::getAdministratorsInfo(administrator);
                }

                else cout << "Error\n";
            }

            else if (choose == enMainWindowOption::ADMINSTERATOR) {
                system("cls");
                enum class enAdminsteratorMenu {
                    addProf = '1', addDepart, addCourse, addStudent, getProfessor, getDepartment, getCourse, getStudent
                };
                cout << "_\n";
                cout << "[1]: Add Professor\n[2]: Add Department\n[3]: Add Course\n[4]: Add Student\n";
                cout << "[5]: Get Professor\n[6]: Get Department\n[7]: Get Course\n[8]: Get Student\n";
                cout << "_\n";

                cout << "Enter your choose from [1 to 8] :  ";
                cin >> chose;
                auto choose = enAdminsteratorMenu(chose);
                if (choose == enAdminsteratorMenu::addProf) {
                    Professor prof;
                    professor.push_back(Administrator::addProfessor(prof));
                }

                else if (choose == enAdminsteratorMenu::addDepart) {
                    Department depart;
                    department.push_back(Administrator::addDepartment(depart));
                }

                else if (choose == enAdminsteratorMenu::addCourse) {
                    Course cour;
                    course.push_back(Administrator::addCourses(cour));
                }

                else if (choose == enAdminsteratorMenu::addStudent) {
                    Student std;
                    Administrator::addStudents(std);
                    student.push_back(std);
                }

                else if (choose == enAdminsteratorMenu::getProfessor) {
                    Administrator::getData(professor);
                }

                else if (choose == enAdminsteratorMenu::getDepartment) {
                    Administrator::getData(department);
                }

                else if (choose == enAdminsteratorMenu::getCourse) {
                    Administrator::getData(course);
                }

                else if (choose == enAdminsteratorMenu::getStudent) {
                    Administrator::getData(student);
                }

                else cout << "Error\n";

            }


            else if (choose == enMainWindowOption::PROFESSOR) {
                system("cls");
                cout << "_\n";
                cout << "[1]: Add course\n[2]: Get Professor Info\n";
                cout << "_\n";

                enum class enStudentMenu {
                    addCours = '1', getProfessorinfo
                };

                cout << "Enter your choose form [1 to 2]  :  ";
                cin >> chose;
                auto choose = (enStudentMenu)chose;
                if (choose == enStudentMenu::getProfessorinfo) {
                    Professor::getProfessorInfo(professor);
                }

                else if (choose == enStudentMenu::addCours) {
                    Professor::addCourse(professor);
                }

                else cout << "Error\n";
            }

            else if (choose == enMainWindowOption::STUDENT) {
                system("cls");
                cout << "_\n";
                cout << "[1]: Add course\n[2]: Get student Info\n";
                cout << "_\n";

                enum class enStudentMenu {
                    addCours = '1', getStudentinfo
                };

                cout << "Enter your choose form [1 to 2]  :  ";
                cin >> chose;
                auto choose = (enStudentMenu)chose;
                if (choose == enStudentMenu::getStudentinfo) {
                    Student::getStudentInfo(student);
                }

                else if (choose == enStudentMenu::addCours) {
                    Student::addCourse(student);
                }

                else cout << "Error\n";
            }

            else cout << "Error\n";

            cout << "Plz enter y to back to main menu or n to end the program: ";
            cin >> c;


            if (c == 'Y' || c == 'y') {
                system("cls");
            }
            else if (c == 'n' || c == 'N') {
                cout << "Thanks \n The Program is Ended :) \n";
            }
            else {
                cout << " Error\n Thanks \n The Program is Ended :) \n";
            }
        }
    }
};