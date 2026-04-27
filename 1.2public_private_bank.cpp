/*
Class: 5
Date: 10-03-2026
Topic: classes

There are two types of classes:
private
public

Program:

*/
#include<iostream>
using namespace std;

class BankAccount
{
private:
    int balance;
    string accountHolder;
    int accountNumber;
    static int totalAccounts;

public:
    BankAccount(string name, int initialBalance)
    {
        accountHolder = name;
        balance = initialBalance;
        totalAccounts++;
        accountNumber = totalAccounts;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount a1("Pradeep", 5000);
    BankAccount a2("Anveer", 7000);

    a1.display();
    a2.display();

    return 0;
}
