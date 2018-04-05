//
//  main.cpp
//  SurroundTheCirclesReddit
//
//  Created by Faisal El-Shabani on 2017-10-11.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> coordinates;
    coordinates.push_back("1,1,2");
    coordinates.push_back("2,2,0.5");
    coordinates.push_back("-1,-3,2");
    coordinates.push_back("5,2,1");
    
    
    cout << coordinates[0].find(",") << endl;
    return 0;
}
