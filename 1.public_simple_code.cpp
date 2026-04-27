/*
Class: 5
Date: 10-03-2026
Topic: classes and objects

There are two types of classes:
private
public

Program:
*/#include <iostream>
using namespace std;

class Student
{
public:
    int id,age;
    string name;

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout <<"age:" << age <<  endl;
    }
};

int main()
{
    Student s1,s2;// s1 and s2 are objects

    s1.id = 101;
    s1.name = "Abhay";
    s1.age=20;

    s1.id=102;
    s1.name="anveer";
    s1.display();


    s2.id=103;
    s2.name="virat";
    s2.age=20;
    s2.display();




    return 0;
}
