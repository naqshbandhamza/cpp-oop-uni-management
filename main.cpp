#include <iostream>
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
    Student* student_obj = new Student(
        "Muhammad Hamza",
        "P001",
        "hamza@example.com",
        "+92-300-1234567",
        "BSCS-2023-001",
        5
    );

    student_obj->displayDetails();

    cout << "\n--------------------\n\n";

    Teacher* teacher_obj = new Teacher(
        "John Smith",
        "P002",
        "john.smith@university.edu",
        "+92-301-9876543",
        "EMP-1001",
        "Computer Science",
        "Professor",
        120000.00
    );

    teacher_obj->displayDetails();


    delete student_obj;
    delete teacher_obj;

    return 0;
}