//
//  main.cpp
//  ClosestString
//
//  Created by Faisal El-Shabani on 2018-04-05.
//  Copyright © 2018 Faisal El-Shabani. All rights reserved.
//

//In theoretical computer science, the closest string is an NP-hard computational problem, which tries to find the geometrical center of a set of input strings. To understand the word "center", it is necessary to define a distance between two strings. Usually, this problem is studied with the Hamming distance in mind. This center must be one of the input strings.
//In bioinformatics, the closest string problem is an intensively studied facet of the problem of finding signals in DNA. In keeping with the bioinformatics utility, we'll use DNA sequences as examples.
// ATCAATATCAA
//ATTAAATAACT
//AATCCTTAAAC
//CTACTTTCTTT
//TCCCATCCTTT
//ACTTCAATATA
//Using the Hamming distance (the number of different characters between two sequences of the same length), the all-pairs distances of the above 6 sequences puts ATTAAATAACT at the center.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> list;
    list.push_back("AACACCCTATA");
    list.push_back("CTTCATCCACA");
    list.push_back("TTTCAATTTTC");
    list.push_back("ACAATCAAACC");
    list.push_back("ATTCTACAACT");
    list.push_back("ATTCCTTATTC");
    list.push_back("ACTTCTCTATT");
    list.push_back("TAAAACTCACC");
    list.push_back("CTTTTCCCACC");
    list.push_back("ACCTTTTCTCA");
    list.push_back("TACCACTACTT");

    int counter;
    int max=0;
    int index=0;
    for (int i=0;i<list.size();i++)
    {
        counter = 0;
        for (int j=0;j<list.size();j++)
        {
            string a = list.at(i);
            string b = list.at(j);
            for (int z=0;z<sizeof(a);z++)
            {
                if (a[z]==b[z])
                {
                    counter++;
                }
            }
        }
        if (counter>max)
        {
            max=counter;
            index=i;
        }
    }
    cout << list.at(index) << endl;
    return 0;
}
