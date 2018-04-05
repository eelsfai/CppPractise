//
//  main.cpp
//  HelloWorld
//
//  Created by Faisal El-Shabani on 2017-08-06.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
#define min2(a,b) (a<b ? a:b)
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void printArray(const int arr[], const int len) {
    for(int i=0; i < len; i++)
        std::cout << " " << arr[i];
    std::cout << std::endl;
}

template <typename T>
T min(T a, T b)
{
    return a<b ? a : b ;

};

template <typename T>
class Stack{
    vector<T>stack;
public:

    bool empty(){
        return stack.empty();
    }
    void push(const T &item){
        stack.push_back(item);
    }
    T &top(){
        return stack.end();
    }
    void pop(){
        stack.pop_back();
    }
    T operator+ (Stack second){
        Stack c;
        vector <int>::iterator it;
        for (it=stack.begin();it != stack.end();it++){
            c.push(it);
        }
        
        for (it=second.begin();it != second.end();it++){
            c.push(it);
        }
        return c;
    }
};

int main()
{

    /*set<int> iset;
     iset.insert(5);
     iset.insert(9);
     iset.insert(1);
     iset.insert(8);
     iset.insert(3);
     cout << "iset contains:";
     set<int>::iterator it;


     for(it=iset.begin(); it != iset.end(); it++)
     cout << " " << *it;
     cout << endl;
     */
    
    //std::cout << min('a','b') << std::endl;

    Stack <int> a, b;
    a.push(1);
    a.push(2);
    b.push(3);
    b.push(4);
    
    Stack <int> c;
    //a+b;
    int d=5;
    float e = 5.0;
    cout << "e = " << e << endl;
    cout << static_cast<float>(d) << endl;
    cout << "hello world" << endl;
    
    return 0;
}
