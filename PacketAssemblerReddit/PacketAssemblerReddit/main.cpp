//
//  main.cpp
//  PacketAssemblerReddit
//
//  Created by Faisal El-Shabani on 2017-10-09.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

// https://www.reddit.com/r/dailyprogrammer/comments/72ivih/20170926_challenge_333_easy_packet_assembler/


void swapBasedOnFirstIndex (vector<string> &inputText)
{
    for (int i=0;i<inputText.size();i++)
    {
        long index = inputText[i].find(' ');
        int val = stoi(inputText[i].substr(0, index));
        int min = val;
        int vectorIndex = 0;
        for (int j=i+1;j<inputText.size();j++)
        {
            long index2 = inputText[j].find(' ');
            int val2 = stoi(inputText[j].substr(0, index2));
            if (val2 < min)
            {
                min = val2;
                vectorIndex=j;
            }
        }
        if (min<val)
        {
            swap(inputText[i],inputText[vectorIndex]);
        }
    }
}
void swapBasedOnSecondIndex (vector<string> &inputText)
{
    
    for (int i=0;i<inputText.size();i++)
    {
        long index = inputText[i].find(' ');
        int valFromFirstIndex = stoi(inputText[i].substr(0, index));
        int val2FromFirstIndex = valFromFirstIndex ; //initialize
        
        string substring1 = inputText[i].substr(index+4,inputText[i].size());
        index = substring1.find(' ');
        int val = stoi(substring1.substr(0, index));
        int min = val;
        int vectorIndex = 0;
        for (int j=i+1;j<inputText.size();j++)
        {
            long index2 = inputText[j].find(' ');
            val2FromFirstIndex = stoi(inputText[j].substr(0, index2));
            
            
            string substring2 = inputText[j].substr(index2+4,inputText[j].size());
            int val2 = stoi(substring2.substr(0, index2));
            if ((val2 < min) & (valFromFirstIndex==val2FromFirstIndex))
            {
                min = val2;
                vectorIndex=j;
            }
        }
        if (min<val)
        {
            swap(inputText[i],inputText[vectorIndex]);
        }
    }
}

int main() {
    vector<string> inputText;
    string line;
    //ifstream myfile ("/Users/sha3bani/Desktop/PacketAssemblerReddit/PacketAssemblerReddit/PacketAssemblerText.txt");
    ifstream myfile ("/Users/sha3bani/Desktop/PacketAssemblerReddit/PacketAssemblerReddit/PacketAssemblerTextChallengeInput.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            inputText.push_back(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file";
    
    swapBasedOnFirstIndex(inputText);
    swapBasedOnSecondIndex(inputText);
    for (int i = 0;i<inputText.size();i++)
    {
        cout << inputText[i] << endl;
    }
    
    return 0;
}
