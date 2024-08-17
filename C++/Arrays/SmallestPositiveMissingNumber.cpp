#include<iostream>

using namespace std;

int smallest_positive_missing_number(int arr[],int n){
    const int N = 1e5 + 2;
    bool check[N];

    for(int i=0; i<N; i++){
        check[i] = false;
    }

    for(int i=0; i<n ; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }

    int ans = -1;
    for(int i=0; i<N; i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << smallest_positive_missing_number(arr,n) << endl;
}