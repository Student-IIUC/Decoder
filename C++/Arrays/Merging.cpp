#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of 1st array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the element of 1st array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    int m;
    cout<<"Enter the size of 2nd array : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the element of 2nd array : "<<endl;
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    int result[m+n];
    for(int i=0;i<n;i++)
        result[i] = arr1[i];
    for(int i=0,j=n;i<m,j<(m+n);i++,j++)
        result[j] = arr2[i];
    // int min = result[0];
    for(int i=0;i<(n+m)-1;i++){
        for(int j=i+1;j<(n+m);j++){
            if(result[i]>result[j]){
                swap(result[i],result[j]);
            }
        }
    }
    for(int i=0;i<(m+n);i++)
        cout<<result[i]<<" ";
}