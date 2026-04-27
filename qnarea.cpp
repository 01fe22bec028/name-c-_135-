//write a c++ program to calculate area with default length as 5 and bredth as 4 , area has to be calculated based on the inputs provided or not provided by the user , what further improvements can be done
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructor with default values
    Rectangle(int l = 5, int b = 4)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
    }
};

int main()
{
    int l, b;
    char choice;

    cout << "Do you want to enter values? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;

        Rectangle r1(l, b);  // user values
        r1.display();
    }
    else
    {
        Rectangle r2;        // default values (5,4)
        r2.display();
    }

    return 0;
}
