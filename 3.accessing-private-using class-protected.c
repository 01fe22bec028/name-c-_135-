//accessing private veraibles using class variable is projtected
#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;

};
class derived: public Base
{
public:
    void setData()
    {
        x=2;
    }
    void display()

};


