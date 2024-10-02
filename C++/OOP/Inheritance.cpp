#include <bits/stdc++.h>

using namespace std;

class Shape
{
    string color;
public:
    void set_color(string c){
        color = c;
    }

    string get_color(){
        return color;
    }

};

class Circle:public Shape
{
    double radius;
public:
    void set_radius(double r){
        radius = r;
    }

    double get_radius(){
        return radius;
    }
};

int main()
{
    Circle ob1;
    ob1.set_color("GREEN");
    cout << ob1.get_color() << endl;
    ob1.set_radius(12.7);
    cout << ob1.get_radius() << endl;
}