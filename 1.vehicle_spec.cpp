#include <iostream>
using namespace std;

class Vehicle
{
public:
    int speed;

    void showspeed()
    {
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Vehicle
{
public:
    string brand;
};

int main()
{
    Car c1;

    c1.brand = "Toyota";
    c1.speed = 120;

    cout << "Brand: " << c1.brand << endl;
    c1.showspeed();

    return 0;
}
