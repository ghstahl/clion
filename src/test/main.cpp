#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;



int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<Person> persons;
    for(int i = 0; i<10;++i){
        Person person;
        std::stringstream ssFirstName;
        ssFirstName << "First" << i;
        person.setFirstName(ssFirstName.str());
        std::stringstream ssLastName;
        ssLastName << "Last" << i;
        person.setLastName(ssLastName.str());
        persons.push_back(person);
    }

    for(int i = 0; i<persons.size();++i){
        string fullName = persons[i].getFullName();
        std::cout << "Hello, " <<persons[i].getFullName()<< std::endl;
    }

    return 0;
}