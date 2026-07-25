#include <iostream>
#include "course.h"
#include "section.h"
#include "department.h"

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

void Course::addSection(Section* section)
{
    sections.push_back(section);
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