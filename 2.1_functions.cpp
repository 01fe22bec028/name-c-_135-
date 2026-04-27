/*
Class: 4
Date: 09-03-2026
Topic: User Defined Functions

There are two types of functions:
1) Library defined functions
2) User defined functions

Program:
Write a C++ program using a function to add two numbers
and display the result.
*/



#include<iostream>
using namespace std;

void add();   // function declaration

int main()
{
    add();   // function call
    return 0;
}

void add()   // function definition
{
    int a,b,sum;
    cout<<"Enter two numbers"<<endl;
    cout<<"a: ";
    cin>>a;

    cout<<"b: ";
    cin>>b;

    sum = a + b;
    cout<<"Sum = "<<sum<<endl;
}
