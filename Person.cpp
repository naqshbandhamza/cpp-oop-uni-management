#include <iostream>
#include "person.h"

using namespace std;

Person::Person(string person_name, string person_id, string person_email, string person_phone)
{
    this->person_name=person_name;
    this->person_email=person_email;
    this->person_id=person_id;
    this->person_phone=person_phone;
}

void Person::displayDetails(){
    cout<< this->person_name<<endl;
    cout<<this->person_email<<endl;
    cout<<this->person_phone<<endl;
}

Person::~Person(){
    cout << "Person destructor called"<<endl;
}