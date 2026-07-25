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

    // void addCourse(Course* course);
    // void addTeacher(Teacher* teacher);

    Course* addCourse(
        string course_name,
        string course_id,
        int course_credits
    );

    Teacher* addTeacher(
        string person_name,
        string person_id,
        string person_email,
        string person_phone,
        string teacher_employeeid,
        string teacher_specialization,
        string teacher_designation,
        double teacher_salary
    );

    void displayDetails();

    ~Department();
};