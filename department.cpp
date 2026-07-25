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

void Department::addCourse(Course* course)
{
    courses.push_back(course);
}

void Department::addTeacher(Teacher* teacher){
    teachers.push_back(teacher);
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