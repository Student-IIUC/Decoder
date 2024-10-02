#include <bits/stdc++.h>

using namespace std;

class Student{
    string Name;
    int Age;
public:
    void setName(string name){ // setter
        Name = name;
    }
    string getName(){ // getter
        return Name;
    }
    void setAge(int age){
        if (age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
};

int main(){
    Student student1;
    student1.setName("Irfan");
    student1.setAge(13);
    cout << student1.getName() << " is " << student1.getAge() << " years old." << endl;
}