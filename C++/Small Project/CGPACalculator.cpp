#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter no of subjects : ";
    cin >> n;
    float arr[n];
    cout << "Enter grade point of your subjects : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter grade point of subject " << i + 1 << " : ";
        cin >> arr[i];
    }
    // float m;
    // cout<<"Enter total credit hours : ";
    // cin>>m;
    float brr[n];
    cout << "Enter each subjects credits : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter credit hour of subject " << i + 1 << " : ";
        cin >> brr[i];
    }
    float sum = 0;
    float m = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * brr[i];
        m += brr[i];
    }
    float avg = sum / m;
    system("cls");
    cout << "Grade\t\tCredit" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t\t" << brr[i] << endl;
    }
    cout << "Total credit hours : " << m << endl;
    cout << "Total CGPA : " << avg << endl;
}