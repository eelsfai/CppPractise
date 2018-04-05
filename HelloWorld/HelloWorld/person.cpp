//
//  person.cpp
//  HelloWorld
//
//  Created by Faisal El-Shabani on 2017-08-12.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include "person.hpp"
#include <iostream>
using namespace std;

person::person()
{
    
}

person::person(string fname,string lName)
{
    firstName = fname;
    lastName = lName;
}

person::person(string fname,string lName, int age)
{
    firstName = fname;
    lastName = lName;
    age = age;

}

person::~person()
{

}

void person::sayHello()
{
    cout << "Hello !";
}
