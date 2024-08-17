#include "bits/stdc++.h"

using namespace std;

int main()
{
    string url;
    cin >> url;

    int size = url.size();
    for (int i = 0; i < size; i++)
    {
        if (url[i] == '?')
        {
            i++;
            for (int j = i; j < size; j++)
            {
                if (url[j] == '=')
                {
                    cout << ": ";
                    continue;
                }
                else if (url[j] == '&')
                {
                    cout << endl;
                    continue;
                }
                cout << url[j];
            }
            break;
        }
    }
}