#pragma once
#include <iostream>
#include <vector>
#include "person.h"

using namespace std;

class Section;

class Student : public Person
{
    string student_rollno;
    int student_semester;
    double student_cgpa;

    vector<Section*> enrolled_sections;

public:
    Student(string person_name, string person_id, string person_email, string person_phone,string student_rollno,int student_semester );
    void addSection(Section* section);
    void displayDetails();
    ~Student();
};