#include <bits/stdc++.h>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0.0;
    int choice;

    while (1)
    {
        system("cls");

        cout << "\t\t****** WELCOME TO ONLINE BANK ******\n\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting\n";
            return 0;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

        cout << "\nPress Enter to continue.....";
        while (getchar() != '\n');
        getchar();
    }
}

void showBalance(double balance)
{
    cout << "Your balance is: $" << fixed << setprecision(2) << balance << '\n';
}
double deposit()
{
    double amount;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "That's not a valid amount!\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds\n";
        return 0;
    }

    else if (amount < 0)
    {
        cout << "That's not a valid amount!\n";
        return 0;
    }
    else
    {
        return amount;
    }
}
