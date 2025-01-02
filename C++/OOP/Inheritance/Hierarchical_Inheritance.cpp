// In this Inheritance, Sevaral derived classes from a single base class
#include<iostream>

using namespace std;

class Base{
public:
    Base(){
        cout << "In Base Class\n";
    }
};

class Derived1: public Base{
public:
    Derived1(){
        cout << "In Derived1 Class\n";
    }
};

class Derived2: public Base{
public:
    Derived2(){
        cout << "In Derived2 Class\n";
    }
};

int main(){
    Derived1 obj1;
    Derived2 obj2;
}