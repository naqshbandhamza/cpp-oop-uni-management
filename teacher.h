#pragma once
#include <iostream>
#include "person.h"

using namespace std;

class Department;

class Teacher : public Person
{
    string teacher_employeeid;
    string teacher_specialization;
    string teacher_designation;
    double teacher_salary;

    Department* department;

public:
    Teacher(string person_name, string person_id, string person_email, string person_phone, string teacher_employeeid,
            string teacher_specialization,
            string teacher_designation,
            double teacher_salary,Department* department);
    void displayDetails();
    ~Teacher();
};