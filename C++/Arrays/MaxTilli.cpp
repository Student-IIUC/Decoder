#include<iostream>

using namespace std;

void max_Till_i(int arr[],int n){
    int mx = arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    max_Till_i(arr,n);
}