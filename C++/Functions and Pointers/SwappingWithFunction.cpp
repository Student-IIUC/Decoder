#include<iostream>

using namespace std;

void swap(int& x,int& y){
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int n;
    cout<<"Enter 1st number : ";
    cin>>n;
    int r;
    cout<<"Enter 2nd number : ";
    cin>>r;
    swap(n,r);
    cout<<"After swap : "<<endl;
    cout<<n<<" "<<r<<endl;
    return 0;
}