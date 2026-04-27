#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,bredth;
public:
    void areaCalculation()
    {
        cout<<"enter values of length and bredth to calculate are"<< endl ;
        cout<<"L=";
        cin >> length;
        cout<<"b=";
        cin >>bredth;
        int area=length*bredth;
        cout<< "area=" <<area<<endl;
    }
};
class triangle
{
private:
    int bredth,height;
public:
    void areaCalculation()
    {
        cout<<"enter values of length and bredth to calculate are"<< endl ;
        cout<<"b=";
        cin >> bredth;
        cout<<"h=";
        cin >>height;
        int area=0.5*bredth*height;
        cout<< "area=" <<area<<endl;
    }
};
int main()
{
    rectangle r;//object
    triangle t;
    int choice;
    cout<<"choose the option to calculate the area"<<endl;
    cout << "1. Rectangle\n";
    cout << "2. triangle\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
            r.areaCalculation(); //functions need to be called using object
            break;
        }
        case 2:
        {
            t.areaCalculation(); //functions need to be called using object
            break;
        }

        case 3:
        {
            cout<<"program exited";
            break;
        }
    }
    return 0
    ;
}
