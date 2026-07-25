#include <iostream>
#include "teacher.h"
#include "department.h"

using namespace std;

Teacher::Teacher(
    string person_name,
    string person_id,
    string person_email,
    string person_phone,
    string teacher_employeeid,
    string teacher_specialization,
    string teacher_designation,
    double teacher_salary,Department* department
)
    : Person(person_name, person_id, person_email, person_phone),
      teacher_employeeid(teacher_employeeid),
      teacher_specialization(teacher_specialization),
      teacher_designation(teacher_designation),
      teacher_salary(teacher_salary),
      department(department)
{
}

void Teacher::displayDetails()
{
    Person::displayDetails();

    cout << "Employee ID: " << teacher_employeeid << endl;
    cout << "Specialization: " << teacher_specialization << endl;
    cout << "Designation: " << teacher_designation << endl;
    cout << "Salary: " << teacher_salary << endl;
}