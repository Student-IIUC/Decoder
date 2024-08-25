#include <bits/stdc++.h>

using namespace std;

int main()
{
    string choice;

    do
    {
        system("cls");

        int num, guess, tries = 0;

        srand(time(0));
        num = rand() % 100 + 1;

        cout << "\t\t******* NUMBER GUESING GAME *******\n";

        do
        {
            cout << "Enter a guess between (1-100): ";
            cin >> guess;

            tries++;

            if (guess > num)
            {
                cout << "Too high!\n";
            }

            else if (guess < num)
            {
                cout << "Too low!\n";
            }

            else
            {
                cout << "Correct! Number of tries: " << tries << '\n';
            }

        }while (guess != num);

        cout << "\t\t***********************************\n";

        cout << "Do another? (yes / no): ";
        cin >> choice;
    }while (choice != "no");

    
}