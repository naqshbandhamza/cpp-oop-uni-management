#include <iostream>
#include "university.h"
#include "department.h"
#include "course.h"
#include "section.h"
#include "teacher.h"
#include "student.h"

using namespace std;

int main()
{
    // University
    University *university = new University(
        "National University of Sciences",
        "Islamabad, Pakistan");

    // Department
    Department *cs_department = university->addDepartment(
        "Computer Science",
        "DEPT-CS");

    // Teacher
    Teacher *teacher = cs_department->addTeacher(
        "John Smith",
        "P002",
        "john.smith@university.edu",
        "+92-301-9876543",
        "EMP-1001",
        "Computer Science",
        "Professor",
        120000.00);

    // Course
    Course *course = cs_department->addCourse(
        "Object Oriented Programming",
        "CS-201",
        3);

    // Section
    Section *section = course->addSection(
        "SEC-A",
        "Section A",
        "Fall 2026",
        "Mon/Wed 10:00-11:30",
        teacher);

    // Student
    Student *student = new Student(
        "Muhammad Hamza",
        "P001",
        "hamza@example.com",
        "+92-300-1234567",
        "BSCS-2023-001",
        5);

    section->addStudent(student);

    // Attendance
    section->markAttendance(student, "2026-07-20", true);
    section->markAttendance(student, "2026-07-22", false);

    // Display the whole system, top-down
    university->displayDetails();

    // Cleanup
    // University owns and deletes Department -> Course -> Section -> Attendance.
    // Student is created standalone here, so it must be deleted separately.
    delete university;
    delete student;

    return 0;
}