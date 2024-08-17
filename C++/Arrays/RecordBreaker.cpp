#include<iostream>

using namespace std;

int record_breaker(int arr[],int n){
    int ans = 0;
    int mx = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>mx and arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx,arr[i]);
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(n == 1){
        cout<<"1"<<endl;
        return 0;
    }

    cout<<record_breaker(arr,n)<<endl;

}