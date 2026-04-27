#include <iostream>
using namespace std;

class A {
public:
    int x = 10;

protected:
    int y = 20;

private:
    int z = 30;
};
class B : public A {
public:
    void show() {
        cout << "Public Inheritance\n";
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    B obj;
    obj.show();

    cout << obj.x << endl;

    return 0;
}
