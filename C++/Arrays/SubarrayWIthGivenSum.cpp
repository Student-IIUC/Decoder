#include<iostream>

using namespace std;

void subarray_with_given_sum(int arr[],int n,int& a,int& b,int s){
    int i=0, j=0, sum=0;
    a = -1,b = -1;
    while(j<n and sum+arr[j] <= s){
        sum+=arr[j];
        j++;
    }

    if(sum==s){
        a = i+1; b = j;
        return;
    }

    while(j<n){
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }

        if(sum == s){
            a = i+1;
            b = j+1;
            break;
        }
        j++;
    }
    return;
}

int main()
{
    int n,s;
    cin>>n>>s;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int st,en;

    subarray_with_given_sum(arr,n,st,en,s);

    cout << st <<" "<< en <<endl;
}