#include <iostream>
#include "course.h"
#include "section.h"
#include "department.h"
#include "teacher.h"

using namespace std;

Course::Course(
    string course_name,
    string course_id,
    int course_credits,
    Department* department
)
    : course_name(course_name),
      course_id(course_id),
      course_credits(course_credits),
      department(department)
{
}

// void Course::addSection(Section* section)
// {
//     sections.push_back(section);
// }

Section* Course::addSection(
    string section_id,
    string section_name,
    string semester,
    string schedule,
    Teacher* assigned_teacher
)
{
    Section* temp_sec =  new Section(
        section_id,
        section_name,
        semester,
        schedule,
        this,
        assigned_teacher
    );
    sections.push_back(
       temp_sec
    );

    return temp_sec;
}



void Course::displayDetails()
{
    cout << "Course Name: " << course_name << endl;
    cout << "Course ID: " << course_id << endl;
    cout << "Credits: " << course_credits << endl;

    cout << "\nSections:\n";

    if (sections.empty())
    {
        cout << "No sections available." << endl;
        return;
    }

    for (Section* section : sections)
    {
        cout << "------------------------" << endl;

        if (section != nullptr)
        {
            section->displayDetails();
        }
    }
}

Course::~Course(){

    cout << "Course destructor called"<<endl;

    for (Section* section : sections)
    {
        delete section;
    }

    sections.clear();
}