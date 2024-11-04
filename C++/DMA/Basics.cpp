#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int m;
    cout << "Enter the number of columns : ";
    cin >> m;

    // Declare memory block of size n
    int **arr = new int *[n];
    for (int row{0}; row < n; row++){
        // Declare memory block of size m
        arr[row] = new int[m];
        for (int col{0}; col < m; col++){
            cin >> arr[row][col];
        }
    }

    for (int row{0}; row < n; row++){
        for (int col{0}; col < m; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Delete the dynamic array created
    for (int i{}; i < n; i++){
        // To delete the inner arrays
        delete[] arr[i];
    }

    delete[] arr; // to delete the outer array 
                  // which contained the pointers
                  // of all the inner arrays
}