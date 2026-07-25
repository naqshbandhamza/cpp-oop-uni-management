#include "section.h"
#include "teacher.h"
#include "student.h"
#include "attendance.h"
#include "course.h"

using namespace std;


Section::Section(
    string section_id,
    string section_name,
    string semester,
    string schedule,
    Course* course,
    Teacher* assigned_teacher
)
    : section_id(section_id),
      section_name(section_name),
      semester(semester),
      schedule(schedule),
      course(course),
      assigned_teacher(assigned_teacher)
{
}


void Section::addStudent(Student* student)
{
    enrolled_students.push_back(student);
    student->addSection(this);
}

void Section::markAttendance(
    Student* student,
    string date,
    bool present
)
{
    Attendance* record = new Attendance(
        student,
        date,
        present
    );

    attendance_records.push_back(record);
}

void Section::displayDetails()
{
    cout << "Section ID: " << section_id << endl;
    cout << "Section Name: " << section_name << endl;
    cout << "Semester: " << semester << endl;
    cout << "Schedule: " << schedule << endl;

    cout << "\nAssigned Teacher:\n";
    if (assigned_teacher != nullptr)
    {
        assigned_teacher->displayDetails();
    }
    else
    {
        cout << "No teacher assigned" << endl;
    }


    cout << "\nEnrolled Students:\n";

    if (enrolled_students.empty())
    {
        cout << "No students enrolled" << endl;
    }
    else
    {
        for (Student* student : enrolled_students)
        {
            cout << "-------------------" << endl;

            if (student != nullptr)
            {
                student->displayDetails();
            }
        }
    }
}