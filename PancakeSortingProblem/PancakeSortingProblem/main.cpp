//
//  main.cpp
//  PancakeSortingProblem
//
//  Created by Faisal El-Shabani on 2018-04-12.
//  Copyright © 2018 Faisal El-Shabani. All rights reserved.



// https://www.reddit.com/r/dailyprogrammer/comments/82pt3h/20180307_challenge_353_intermediate/

#include <iostream>
#include <vector>
using namespace std;
int findIndexMax (int* addressOfFirstElement, long sizeOfpancakes)
{
    int max = 0;
    int index = 0;
    for (int i=0;i<=sizeOfpancakes-1;i++)
    {
        if (*(addressOfFirstElement+i) > max)
        {
            max = *(addressOfFirstElement+i);
            index = i;
        }
    }
    
    return index;
}

void SwapPositions (int* addressOfFirstElement, long indexOfMax)
{
    int tmp1 = 0;
    int tmp2 = 0;
    for (int i=0;i<=(indexOfMax/2);i++)
    {
        tmp1 = * (addressOfFirstElement+i);
        tmp2 = * (addressOfFirstElement+indexOfMax-i);
        * (addressOfFirstElement+i) = tmp2;
        * (addressOfFirstElement+indexOfMax-i) = tmp1;
    }
    

}

int main() {
    vector<int> pancakes = {3, 12, 8, 12, 4, 7, 10, 3, 8, 10};
    int indexMax = 0;
    int flips=0;
    for (int i=0;i<=pancakes.size()-1;i++)
    {
        indexMax = findIndexMax(&pancakes[0], pancakes.size()-i);
        if(indexMax!=pancakes.size()-i)
        {
            if(indexMax!=0)
            {
                SwapPositions(&pancakes[0], indexMax); //swapToTop
                flips+=1;
            }
            SwapPositions(&pancakes[0], pancakes.size()-1-i); //swapToBottom
            flips+=1;
        }
    }

    cout << flips << " flips" << endl; // Number of flips
    // printing final output
    for (int j=0;j<=pancakes.size()-1;j++)
    {
        cout << pancakes.at(j) << " ";
    }
    cout << "\n";
    
    return 0;

}
