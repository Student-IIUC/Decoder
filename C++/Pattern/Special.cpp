#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    // int m;
    // cout<<"Enter no of columns : ";
    // cin>>m;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
           int a=i;
           if(i>n) a=2*n-i;
           int b=j;
           if(j>n) b=2*n-j;
           cout<<n+1-min(a,b)<<" "; //Here min() is a built in function.
        }
        cout<<endl;
    }
    return 0;
}