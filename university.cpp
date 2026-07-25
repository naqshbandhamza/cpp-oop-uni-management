#include <iostream>
#include "university.h"
#include "department.h"

using namespace std;

University::University(string uni_name, string uni_address)
    : uni_name(uni_name),
      uni_address(uni_address)
{
}

void University::addDepartment(string dep_name, string dep_id)
{
    departments.push_back(new Department(dep_name, dep_id, this));
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

    for (Department *department : departments)
    {
        cout << "------------------------" << endl;

        if (department != nullptr)
        {
            department->displayDetails();
        }
    }
}


University::~University(){
     for (Department* department : departments)
    {
        delete department;
    }

    departments.clear();
}