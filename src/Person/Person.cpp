//
// Created by ghsta on 11/6/2018.
//


#include "Person.h"
#include <sstream>
using namespace std;
Person::Person() {}
Person::Person(string firstName,string lastName) {
    setFirstName(firstName);
    setLastName(lastName);
}
Person::~Person() {

}
string Person::getFullName()  {
    std::stringstream ss;
    ss << FirstName << " " << LastName;
    string fullName = ss.str();
    return fullName;
}
string Person::getFirstName()  {
    return FirstName;
}

void Person::setFirstName( string firstName) {
    FirstName = firstName;
}

string Person::getLastName() {
    return LastName;
}

void Person::setLastName( string lastName) {
    LastName = lastName;
}