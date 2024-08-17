#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    // int m;
    // cout<<"Enter no of columns : ";
    // cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        int a=i-1;
        for(int k=1;k<=i-1;k++){
            cout<<a<<" ";
            a--;
        }

        cout<<endl;
    }
    return 0;
}