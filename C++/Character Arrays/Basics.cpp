#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];

    cin.getline(arr, n);
    // cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    while (1)
    {
        if (arr[i] == ' ' or arr[i] == '\0')
        {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 0;
        }
        else
            currLen++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << maxLen << endl;
}