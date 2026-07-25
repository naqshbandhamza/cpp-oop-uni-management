#include <iostream>
#include "student.h"
#include "section.h"

using namespace std;

Student::Student(string person_name, string person_id, string person_email, string person_phone, string student_rollno, int student_semester) : Person(person_name, person_id, person_email, person_phone)
{
    this->student_rollno=student_rollno;
    this->student_semester =student_semester;
}

void Student::addSection(Section* section)
{
    enrolled_sections.push_back(section);
}

void Student::displayDetails(){

    Person::displayDetails();  

    cout<<this->student_rollno<<endl;
    cout<<this->student_semester<<endl;
    cout<<this->student_cgpa<<endl;
}