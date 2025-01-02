// In this Inheritance, Deriving a class from already derived class
#include<iostream>

using namespace std;

class Animal{
public:
    Animal(){
        cout << "In Animal Class\n";
    }
};

class Mammal: public Animal{
public:
    Mammal(){
        cout << "In Mammal Class\nIt is derived from Animal Class\n";
    }
};

class Human: public Mammal{
public:
    Human(){
        cout << "In Human Class\nIt is derived from Mammal Class Which is derived from Animal Class\n";
    }
};

int main(){
    Human obj;
}