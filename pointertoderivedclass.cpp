#include<iostream>
using namespace std;
class base{
public:
    void showBase(){
        cout<< "Base\n";}
    };
    class Derv1 : public base
    {
    public:
        void showDerived (){
            cout << "Derv1\n";
        }
    };
    int main (){
        Derv1 dv1;
        base* ptr;
        ptr = &dv1;
        ptr ->showBase();
      ((Derv1*)ptr)->showDerived();
    }
