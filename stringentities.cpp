#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1, s2;

    s1.id = 1;
    s1.name = "Vaishnavi";

    s2.id = 2;
    s2.name = "Swara";

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2 Details:" << endl;
    s2.display();

    return 0;
}
