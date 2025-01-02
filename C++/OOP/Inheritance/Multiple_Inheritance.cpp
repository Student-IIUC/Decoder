// In this Inheritance, A derived class with more than one Base class
#include <iostream>

using namespace std;

class Base1{
    // int x;
public:
    Base1(){
        cout << "In Base1 Class\n";
    }
};

class Base2{
public:
    Base2(){
        cout << "In Base2 Class\n";
    }
};

class Derived : public Base1, public Base2{
public:
    Derived(){
        cout << "In Derived Class\n";
    }
};

int main(){
    Derived obj1;
}