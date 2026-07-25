#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Department;

class University{
    string uni_name;
    string uni_address;

    vector<Department*> departments;

    void addDepartment(Department* department);

    public:
    University(string uni_name,string uni_address);
    void displayDetails();

};