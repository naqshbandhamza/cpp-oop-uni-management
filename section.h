#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course;
class Teacher;
class Student;
class Attendance;


class Section
{
    string section_id;
    string section_name;
    string semester;
    string schedule;

    Course* course;              // Back pointer to Course

    Teacher* assigned_teacher;

    vector<Student*> enrolled_students;

    vector<Attendance*> attendance_records;

public:

    Section(
        string section_id,
        string section_name,
        string semester,
        string schedule,
        Course* course,
        Teacher* assigned_teacher
    );

    void addStudent(Student* student);

    void markAttendance(
        Student* student,
        string date,
        bool present
    );


    void displayDetails();
};