#include "attendance.h"
#include "student.h"

Attendance::Attendance(
    Student* student,
    string date,
    bool present
)
{
    this->student = student;
    this->date = date;
    this->present = present;
}


void Attendance::displayDetails()
{
    cout << "Date: " << date << endl;

    cout << "Student:\n";

    if(student != nullptr)
    {
        student->displayDetails();
    }

    cout << "Status: ";

    if(present)
        cout << "Present" << endl;
    else
        cout << "Absent" << endl;
}


bool Attendance::isPresent()
{
    return present;
}