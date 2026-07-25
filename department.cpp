#include <iostream>
#include "department.h"
#include "university.h"
#include "course.h"
#include "teacher.h"

using namespace std;

Department::Department(
    string dep_name,
    string dep_id,
    University* university
)
    : dep_name(dep_name),
      dep_id(dep_id),
      university(university)
{
}

// void Department::addCourse(Course* course)
// {
//     courses.push_back(course);
// }

// void Department::addTeacher(Teacher* teacher){
//     teachers.push_back(teacher);
// }

void Department::addCourse(
    string course_name,
    string course_id,
    int course_credits
)
{
    courses.push_back(
        new Course(
            course_name,
            course_id,
            course_credits,
            this
        )
    );
}


void Department::addTeacher(
    string person_name,
    string person_id,
    string person_email,
    string person_phone,
    string teacher_employeeid,
    string teacher_specialization,
    string teacher_designation,
    double teacher_salary
)
{
    teachers.push_back(
        new Teacher(
            person_name,
            person_id,
            person_email,
            person_phone,
            teacher_employeeid,
            teacher_specialization,
            teacher_designation,
            teacher_salary,
            this
        )
    );
}


void Department::displayDetails()
{
    cout << "Department Name: " << dep_name << endl;
    cout << "Department ID: " << dep_id << endl;

    cout << "\nCourses:\n";

    if (courses.empty())
    {
        cout << "No courses available." << endl;
        return;
    }

    for (Course* course : courses)
    {
        cout << "------------------------" << endl;

        if (course != nullptr)
        {
            course->displayDetails();
        }
    }
}

Department::~Department(){
    for (Course* course : courses)
    {
        delete course;
    }

    for (Teacher* teacher : teachers)
    {
        delete teacher;
    }

    courses.clear();
    teachers.clear();
}