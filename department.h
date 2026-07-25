#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class University;
class Course;
class Teacher;

class Department
{
    string dep_name;
    string dep_id;

    University* university;

    vector<Teacher*> teachers;
    vector<Course*> courses;

public:

    Department(
        string dep_name,
        string dep_id,
        University* university
    );

    void addCourse(Course* course);
    void addTeacher(Teacher* teacher);

    void displayDetails();
};