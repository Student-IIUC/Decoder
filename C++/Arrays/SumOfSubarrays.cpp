#include<iostream>

using namespace std;

void sum_of_all_subarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr = 0;
        for(int j=i;j<n;j++){
            curr += arr[j];
            cout<<curr<<" ";
        }
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

    sum_of_all_subarrays(arr,n);
}