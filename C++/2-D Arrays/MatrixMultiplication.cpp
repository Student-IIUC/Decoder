#include <iostream>

using namespace std;

// void matrix_multiplication(int *A,int *B,int r1,int c1,int r2,int c2){
//     int result[r1][c2];

//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c2; j++){
//             int value = 0;
//             for(int k=0; k<c1; k++){
//                 value += (*((A + i) + k)) * (*((B + k) + j));
//             }
//             result[i][j] = value;
//         }
//     }
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c2; j++){
//             cout << result[i][j] <<" ";
//         }
//         cout <<endl;
//     }
//     return;
// }

int main()
{
    int r1, c1;
    cin >> r1 >> c1;

    int A[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    int r2, c2;
    cin >> r2 >> c2;

    int B[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible for this input." << endl;
    }

    else
    {
        // matrix_multiplication(*A,*B,r1,c1,r2,c2);
        int result[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int value = 0;
                for (int k = 0; k < c1; k++)
                {
                    value += A[i][k] * B[k][j];
                }
                result[i][j] = value;
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}