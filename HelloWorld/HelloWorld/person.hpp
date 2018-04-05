//#ifndef person_hpp
//#define person_hpp


#pragma once
#include <string>
#include <stdio.h>
using namespace std;

class person
{
private:
    string firstName;
    string lastName;
    int age;
public:
    person();
    person(string fname,string lName);
    person(string fname,string lName, int age);
    ~person();
    void sayHello();
};



//#endif
