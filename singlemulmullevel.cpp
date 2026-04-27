// cpp program to demonstrate single,multiple, and multi level inheritence
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance)" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)" << endl;
    }
};

class X {
public:
    void showX() {
        cout << "Class X" << endl;
    }
};

class Y {
public:
    void showY() {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y {
public:
    void showZ() {
        cout << "Class Z (Multiple Inheritance)" << endl;
    }
};

int main() {

    cout << "Single Inheritance:" << endl;
    B b;
    b.showA();
    b.showB();

    cout << "\nMultilevel Inheritance:" << endl;
    C c;
    c.showA();
    c.showB();
    c.showC();

    cout << "\nMultiple Inheritance:" << endl;
    Z z;
    z.showX();
    z.showY();
    z.showZ();

    return 0;
}
