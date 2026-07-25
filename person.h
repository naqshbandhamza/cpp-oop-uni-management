#pragma once
#include <iostream>

using namespace std;


class Person{
    string person_name;
    string person_id;
    string person_email;
    string person_phone;

    public:
    Person( string person_name, string person_id, string person_email, string person_phone);
    virtual void displayDetails();
    virtual ~Person();
};