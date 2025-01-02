#include <iostream>

using namespace std;

class Example{
    int x;
public:
    Example(int x = 0) {
        this->x = x;
    }

    // Example &operator+=(Example &obj){
    //     this->x += obj.x;
    //     return *this;
    // }

    friend Example &operator+=(Example &obj1, Example &obj2);

    void display(){
        cout << "X = " << x << endl;
    }
};

Example &operator+=(Example &obj1, Example &obj2){
    obj1.x += obj2.x;
    return obj1; 
}

int main() {
    Example obj1(20), obj2(10), obj3;
    obj3 += obj2;
    // obj3 += obj1;
    obj3.display();
}