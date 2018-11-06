#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <stdlib.h>     //for using the function sleep
#include "Person.h"

using namespace std;

// bubble sort
void SortByLastName(vector<Person>& persons){
    bool keepGoing = false;
    do{
        keepGoing = false;
        for(int i = 0; i<persons.size() - 1;++i){
            if(persons[i].getLastName() > persons[i+1].getLastName()){
                keepGoing = true;
                Person current = persons[i];
                Person next = persons[i+1];
                persons[i] = next;
                persons[i+1] = current;
            }
        }
    }while(keepGoing);
}
int main() {
    /* initialize random seed: */
    srand (time(NULL));
    int iRandom = 0;

    std::cout << "Hello, World!" << std::endl;
    sleep(1);
    std::cout << "-----------------------------------------------" << std::endl;
    sleep(1);
    vector<Person> persons;
    for(int i = 0; i<10;++i){
        iRandom = rand() % 1000 + 1;
        Person person;
        std::stringstream ssFirstName;
        ssFirstName << "First" << iRandom;
        person.setFirstName(ssFirstName.str());
        std::stringstream ssLastName;
        ssLastName << "Last" << iRandom;
        person.setLastName(ssLastName.str());
        persons.push_back(person);
    }

    for(int i = 0; i<persons.size();++i){
        string fullName = persons[i].getFullName();
        std::cout << "Hello, " <<persons[i].getFullName()<< std::endl;
    }
    sleep(1);
    std::cout << "-----------------------------------------------" << std::endl;
    sleep(1);
    SortByLastName(persons);
    for(int i = 0; i<persons.size();++i){
        string fullName = persons[i].getFullName();
        std::cout << "Hello, " <<persons[i].getFullName()<< std::endl;
    }
    return 0;
}