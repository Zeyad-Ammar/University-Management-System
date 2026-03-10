University Management System (C++ OOP Project)

A console-based University Management System developed in C++ using Object-Oriented Programming (OOP) principles.

The system simulates a simple university environment where different roles interact with the system, including:

Manager
Administrator
Professor
Student

Each role has specific responsibilities such as managing administrators, professors, departments, courses, and students.
This project was built to practice OOP design, class relationships, and modular system architecture in C++.

 System Architecture

The system is built using multiple classes, each representing a key entity in the university system:

Manager
Administrator
Professor
Student
Course
Department
The program starts from a Run class that controls the main system workflow and user interaction.

 User Roles and Permissions
 Manager

The Manager has the highest level of authority in the system.

Capabilities:

Add new administrators
View administrators information

Menu:

[1] Add Administrator
[2] Get Administrator Info
 Administrator

The Administrator manages the academic structure of the university.

Capabilities:

Add Professor
Add Department
Add Course
Add Student
View Professors
View Departments
View Courses
View Students

Menu:

[1] Add Professor
[2] Add Department
[3] Add Course
[4] Add Student
[5] Get Professor
[6] Get Department
[7] Get Course
[8] Get Student
 Professor

Professors interact with the system to manage their courses.

Capabilities:

Add courses
View professor information

Menu:

[1] Add Course
[2] Get Professor Info
👨‍🎓 Student

Students can interact with the academic system.

Capabilities:

Register courses

View student information

Menu:

[1] Add Course
[2] Get Student Info

 OOP Concepts Used

This project demonstrates several core Object-Oriented Programming concepts:

Classes and Objects
Encapsulation
Modular design
Static methods
Separation of responsibilities
Class interaction
Each entity in the system is represented by a separate class, making the system easier to extend and maintain.

Learning Purpose
This project was created to practice Object-Oriented Programming in C++ and simulate how different roles interact inside a university system.
