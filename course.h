#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Section;
class Department;
class Teacher;

class Course
{
    string course_name;
    string course_id;
    int course_credits;

    Department* department;          // Back pointer

    vector<Section*> sections;

public:

    Course(
        string course_name,
        string course_id,
        int course_credits,
        Department* department
    );

    // void addSection(Section* section);
    Section* addSection(
        string section_id,
        string section_name,
        string semester,
        string schedule,
        Teacher* assigned_teacher
    );

    virtual void displayDetails();

    ~Course();
};