#include <bits/stdc++.h>

using namespace std;

char getUserInput();
char getComputerInput();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    string choice;

    do
    {
        system("cls");

        char player;
        char computer;        

        player = getUserInput();
        cout << "Your choice: ";
        showChoice(player);

        computer = getComputerInput();
        cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);

        cout << "DO another? (yes / no): ";
        cin >> choice;
    } while (choice != "no");
    
}

char getUserInput()
{
    char player;
    cout << "\t******Rock-Paper-Scissors Game*******\n";

    cout << "Choose one of the following\n";
    cout << "'r' for Rock\n";
    cout << "'p' for Paper\n";
    cout << "'s' for Scissors\n";
    cin >> player;

    return player;
}
char getComputerInput()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch (num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}
void showChoice(char choice)
{
    switch (choice)
    {
        case 'r': cout << "Rock\n";
                  break;
        case 'p': cout << "Paper\n";
                  break;
        case 's': cout << "Scissors\n";
                  break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
        case 'r':
            if (computer == 'r')
                cout << "It's a tie!\n";
            else if (computer == 'p')
                cout << "You lose!\n";
            else
                cout << "You win!\n";
            break;
        case 'p':
            if (computer == 'r')
                cout << "You win!\n";
            else if (computer == 'p')
                cout << "It's a tie!\n";
            else
                cout << "You lose!\n";
            break;
        case 's':
            if (computer == 'r')
                cout << "You lose!\n";
            else if (computer == 'p')
                cout << "You win!\n";
            else
                cout << "It's a tie!\n";
            break;
    }
}