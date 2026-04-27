#include<iostream>
using namespace std;
class Base
{
private:
    int x;
public:
    void setData(int a)
    {
        x=a;
    }
    int getdata()
    {
        return x;
    }
};

class Derived: public Base
{
public:
    void displau()
    {
        cout<<"value= "<<getData()<<endl;
    }
};

int main()
{
    Derived d;

    d.setData(10);
    d.display();
}
