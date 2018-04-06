//
//  main.cpp
//  IntegerComplexity1
//
//  Created by Faisal El-Shabani on 2018-04-05.
//  Copyright © 2018 Faisal El-Shabani. All rights reserved.
//


// Given a number A, find the smallest possible value of B+C, if B*C = A. Here A, B, and C must all be positive integers. It's okay to use brute force by checking every possible value of B and C. You don't need to handle inputs larger than six digits. Post the return value for A = 345678 along with your solution.
// https://www.reddit.com/r/dailyprogrammer/comments/83uvey/20180312_challenge_354_easy_integer_complexity_1/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long x=1234567891011;
    long min = x;
    for (long i=1;i<sqrt(x);i++)
    {
        if(x%i==0 && (i+x/i < min))
        {
            min = i+x/i;
        }
    }
    cout << min << endl;
    return 0;
}
