//
//  main.cpp
//  BankingRecordSystem
//
//  Created by Faisal El-Shabani on 2018-05-08.
//  Copyright © 2018 Faisal El-Shabani. All rights reserved.
//
// To run file from terminal: Navigate to main.cpp, type make main, then type ./main
// https://www.codewithc.com/banking-record-system-project-c/


#include <string>
#include <vector>
#include <iostream>
using namespace std;

void displayMainMenu()
{
    cout << "***Account Information System***\nSelect one option below\n\t1-->Add record to file\n\t2-->Show record from file\n\t3-->Search record from file\n\t4-->Update record\n\t5-->Delete record\n\t6-->Quit\nEnter your choice\n";
};
struct Account
{
    size_t AccountNumber;
    string FirstName;
    string LastName;
    size_t Balance;
};

void addRecord (vector <Account> &Accountsptr, int &choic)
{
    cout << "Option 1 Chosen" << endl;
    cout << "Input four digit Account Number" << endl;
    size_t AccountNum;
    cin >> AccountNum;
    cout << "Input First Name" << endl;
    string firstName;
    cin >> firstName;
    cout << "Input Last Name" << endl;
    string lastName;
    cin >> lastName;
    cout << "Input Account Balance" << endl;
    size_t balance ;
    cin >> balance;
    if (cin)
    {
        Account created;
        created.AccountNumber = AccountNum;
        created.FirstName = firstName;
        created.LastName = lastName;
        created.Balance = balance;
        Accountsptr.push_back(created);
        cout << "Account Added Successfully" << endl;
    }
    choic=0;
};
void displayRecords (vector <Account> &Accountsptr, int &choic)
{
    cout << "Option 2 Chosen" << endl;
    if (Accountsptr.size()==0)
        cout << "No Accounts to display";
    else
        for (size_t i=0;i<Accountsptr.size();i++)
           cout << Accountsptr[i].AccountNumber << "\t" << Accountsptr[i].FirstName << "\t" << Accountsptr[i].LastName << "\t" << Accountsptr[i].Balance << endl;
    choic=0;
};

int main() {
    int choice=1;
    vector <Account> Accounts;
    while (choice!=6)
    {
        displayMainMenu();
        cin >> choice ;
        if ((!((choice >= 1) && (choice <= 6))) || !cin)
        {
            cin.clear(); //clears the error flag on cin (so that future I/O operations will work correctly)
            cin.ignore(10000,'\n'); //skips to the next newline (to ignore anything else on the same line)
            cout << "Invalid Choice. Please Enter a number between 1-6\n";
            choice = 0;
        }
        if (choice==1)
            addRecord(Accounts, choice);
        if (choice==2)
            displayRecords(Accounts, choice);
        
    }

    cout << "Thank you for using the service !\n";
    
    return 0;
}
