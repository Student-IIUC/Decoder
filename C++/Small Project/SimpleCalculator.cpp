#include <bits/stdc++.h>

using namespace std;

int main()
{
    string choice;
    do
    {
        system("cls");

        char op;
        double num1, num2;

        cout << "\t\t************** CALCULATOR ***************\n";

        cout << "Enter an operator (+ - * /): ";
        cin >> op;

        cout << "Enter 1st number: ";
        cin >> num1;

        cout << "Enter 2nd number: ";
        cin >> num2;

        switch (op)
        {
            case '+':
                cout << "Result: " << num1 + num2 << '\n';
                break;
            case '-':
                cout << "Result: " << num1 - num2 << '\n';
                break;
            case '*':
                cout << "Result: " << num1 * num2 << '\n';
                break;
            case '/':
                cout << "Result: " << num1 / num2 << '\n';
                break;
            default:
                cout << "Invalid operator";
                break;
        }


        cout << "\t\t****************************************\n";

        cout << "Do another? (yes / no): ";
        cin >> choice;
    }
    while (choice != "no");
}