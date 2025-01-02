// 1. Hybrid inheritance is a combination of multiple inheritance and
//    multilevel inheritance.
// 2. A class is derived from two classes as in multiple inheritance.
// 3. However, one of the parent classes is not a base class.

#include<iostream>

using namespace std;

class Animal{
public:
    Animal(){
        cout << "In Animal class\n";
    }
};

class Mammal: public Animal{
public:
    Mammal(){
        cout << "In Mammal class\nIt is derived from Animal Class\n";
    }
};

class Bird: public Animal{
public:
    Bird(){
        cout << "In Bird class\nIt is also derived from Animal Class\n";
    }
};

class Bat: public Mammal, public Bird{
public:
    Bat(){
        cout << "In Bat class\nIt is derived from Mammal and Bird Class which are derived from Animal Class\n";
    }
};

int main(){
    Bat obj;
}