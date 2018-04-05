//
//  main.cpp
//  RedditPractiseProblems
//
//  Created by Faisal El-Shabani on 2017-09-24.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include <iostream>
using namespace std;

class Num{
    int num;
    friend Num operator+(Num a, Num b);
    friend Num operator-(Num a, Num b);
    friend Num operator*(Num a, Num b);
    friend Num operator/(Num a, Num b);
public:
    Num(){
         num = 0;
    }
    Num(int a)
    {
        num = a;
    }
    int getNum(){
        return num;
    }
};

Num operator+ (Num a,Num b)
{
    return a.num+b.num;
}
Num operator- (Num a,Num b)
{
    return a.num+(-b.num);
}
Num operator* (Num a,Num b)
{
    Num sum(0);
    for (int i=0;i<b.num;i++)
        sum.num +=a.num;
    return sum;
}
Num operator/ (Num a,Num b)
{
    //Num sum(0); // Not sure why, but if this line is removed, the compiler thinks I do not define sum, even though I do in if else statement.
    //if (a.num>=0)
    //    Num sum(a.num);
    //else
    //    Num sum(-a.num);
    Num sum(static_cast<unsigned int>(a.num));
    Num counter(0);
    for (int i=0;i<b.num;i++)
    {
        sum.num -=b.num;
        counter.num +=1;
        if (sum.num<b.num)
            break;
    }
    return counter;
}

ostream& operator<<(ostream &output, Num o)
{
    output << o.getNum();
    return output;
}

int main()
{
    Num a={75};
    Num b={3};
    //Num c = a*b;
    Num c = a/b;
    //cout << c << endl;
    
    cout << static_cast<unsigned int>(-5) << endl;
    
    return 0;
}
