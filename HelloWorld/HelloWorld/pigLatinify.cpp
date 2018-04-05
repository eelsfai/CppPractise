//
//  pigLatinify.cpp
//  HelloWorld
//
//  Created by Faisal El-Shabani on 2017-08-27.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include "pigLatinify.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string pigLatinify(string inputString)
{
    string consonant  =  "b c d f g h j k l m n p q r s t v x z w y";
    string outputString ;
    string VOWELS = "a e i o u";
    if (consonant.find(inputString[0]) != std::string::npos)
    {
        char firstLetter = inputString[0];
        inputString.erase(0,1);
        inputString = inputString+"-"+firstLetter+"ay";
        cout << inputString << endl;
        outputString = inputString;
    }
    else if (VOWELS.find(inputString[0]) != std::string::npos)
    {
        inputString = inputString+"-"+"way";
        outputString = inputString;
    }
    else
    {
        outputString = inputString;
    }
    return outputString;
}
