#include<iostream>
using namespace std;



class Rectangle{

public:
     int l;
     int b;

     Rectangle(){
     l = 0;
     b = 0;
     }

};

int main(){

Rectangle rec;
cout << rec.l <<endl <<  rec.b << endl;
}


class Rectangle{

public:
     int l;
     int b;

     Rectangle(Rectangle &z){
     l = z.l;
     b = z.b;
     }

};

int main(){

Rectangle r1;
Rectangle r1(4,5);
Rectangle r2(r1);
}


