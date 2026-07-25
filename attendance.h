#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student;


class Attendance
{
    Student* student;

    string date;
    bool present;

public:

    Attendance(
        Student* student,
        string date,
        bool present
    );

    void displayDetails();

    bool isPresent();
};