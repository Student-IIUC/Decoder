#include<iostream>

using namespace std;

int longest_arithmatic_subarray(int arr[],int n){
    int ans = 2;
    int pd = abs(arr[1]-arr[0]);//Previous common difference.
    int j = 2;
    int curr = 2;

    while (j<n)
    {
        if(pd == abs(arr[j]-arr[j-1])){
            curr++;
        }
        else{
            pd = abs(arr[j]-arr[j-1]);
            curr = 2; 
        }
        ans = max(ans,curr);
        j++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<longest_arithmatic_subarray(arr,n)<<endl;

}