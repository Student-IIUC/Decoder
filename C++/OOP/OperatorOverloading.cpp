#include <iostream>

using namespace std;

class Example{
    double x;
public:
    void set_x(int x){
        this->x = x;
    }

    Example operator+(Example &ob){
        Example sum;
        sum.x = x + ob.x;
        return sum;
    }

    Example operator-(Example &ob){
        Example subtract;
        subtract.x = x - ob.x;
        return subtract;
    }

    Example operator*(Example &ob){
        Example mult;
        mult.x = x * ob.x;
        return mult;
    }

    Example operator/(Example &ob){
        Example devition;
        devition.x = x / ob.x;
        return devition;
    }

    void show(){
        cout << "Sum of two objects is : " << x << endl;
    }

    void show1(){
        cout << "Subtraction of two objects is : " << x << endl;
    }

    void show2(){
        cout << "Multiplication of two objects is : " << x << endl;
    }

    void show3(){
        cout << "Devition of two objects is : " << x << endl;
    }
};

int main()
{
    Example ob1, ob2, ob3, ob4, ob5, ob6;
    int x, y;
    cin >> x >> y;
    ob1.set_x(x);
    ob2.set_x(y);
    ob3 = ob1 + ob2;
    ob4 = ob1 - ob2;
    ob5 = ob1 * ob2;
    ob6 = ob1 / ob2;
    ob3.show();
    ob4.show1();
    ob5.show2();
    ob6.show3();
}