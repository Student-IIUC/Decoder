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
    
    //Example :
    //123456789

    //1234 6789
    //123   789
    //12     89
    //1       9

    for(int i=1;i<=2*n+1;i++)
        cout<<i<<" ";
    cout<<endl;
    int nsp=1;
    int nst=n;
    // int k=n+1;
    for(int i=1;i<=n;i++){
        // if(k>=2*n-1)
        //  k--;
        int k=1;
        for(int j=1;j<=nst;j++){
            cout<<k<<" ";
            k++;
        }
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
            k++; //Numbers are replaced by spaces.
        }
        for(int j=1;j<=nst;j++){
            cout<<k<<" ";
            k++;
        }
        nsp+=2;
        nst--;
        cout<<endl;
    }
    return 0;
}