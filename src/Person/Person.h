//
// Created by ghsta on 11/6/2018.
//

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H


#include <string>
using namespace std;

class Person {
private:
    // private means that you can't access this internal properties directly.
    // i.e. you cant do
    // Person person("Bob", "Smith");
    // string firstName = person.FirstName;
    //  you can only do this;
    // string firstName = person.getFirstName();
    // this lets you take control of how these properties are set.
    string FirstName;
    string LastName;
public:
    Person();
    Person(string firstName, string lastName);
    virtual ~Person();

    string getFullName();

    string getFirstName();
    void setFirstName(string firstName);

    string getLastName();
    void setLastName(string lastName);
};



#endif //PERSON_PERSON_H
