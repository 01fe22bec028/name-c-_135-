/*
Class: 4
Date: 09-03-2026
Topic: User Defined Functions
Subtopic: Inline Function
Note: Inline functions are used for small functions.

Program:
Write a C++ program using an inline function to add two numbers
and display the result.
*/

#include<iostream>
using namespace std;

inline int sum(int a, int b)   // inline function
{
    return a + b;
}

int main()
{
    int a,b,result;

    cout<<"Enter two numbers"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    result = sum(a,b);
    cout<<"Sum = "<<result<<endl;

    return 0;
}
