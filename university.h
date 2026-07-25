#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Department;

class University{
    string uni_name;
    string uni_address;

    vector<Department*> departments;

    public:
    University(string uni_name,string uni_address);
    Department* addDepartment(string dep_name, string dep_id);
    void displayDetails();
    ~University();
};