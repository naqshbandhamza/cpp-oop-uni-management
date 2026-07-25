#include <iostream>
#include "university.h"
#include "department.h"

using namespace std;

University::University(string uni_name, string uni_address)
    : uni_name(uni_name),
      uni_address(uni_address)
{
}

void University::addDepartment(Department* department)
{
    departments.push_back(department);
}

void University::displayDetails()
{
    cout << "University Name: " << uni_name << endl;
    cout << "University Address: " << uni_address << endl;

    cout << "\nDepartments:\n";

    if (departments.empty())
    {
        cout << "No departments available." << endl;
        return;
    }

    for (Department* department : departments)
    {
        cout << "------------------------" << endl;

        if (department != nullptr)
        {
            department->displayDetails();
        }
    }
}