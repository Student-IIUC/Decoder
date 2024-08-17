#include "bits/stdc++.h"

using namespace std;

void clearScreen();

class CGPA
{
private:
    float Grade_Point;
    float Credit_Hour;
    float Total_Grade_Point = 0;
    float Total_Credit_Hour = 0;

public:
    void subject_info(int n)
    {
        CGPA sub[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter grade point and credit hour of subject " << i + 1 << ":\n";
            cout << "\tGrade Point :";
            cin >> sub[i].Grade_Point;
            cout << "\tCredit Hour :";
            cin >> sub[i].Credit_Hour;
        }
        clearScreen();
    }
    void calculate(int n)
    {
        CGPA sub[n];

        for (int i = 0; i < n; i++)
        {
            Total_Grade_Point += sub[i].Grade_Point * sub[i].Credit_Hour;
            Total_Credit_Hour += sub[i].Credit_Hour;
        }

        cout << fixed << setprecision(1) << "\nTotal Credit Hour:" << Total_Credit_Hour;
        cout << fixed << setprecision(4) << "\nTotal CGPA\t:" << (Total_Grade_Point / Total_Credit_Hour);
    }
    void display(int n)
    {
        CGPA sub[n];
        cout << "Grade point\t\tCredit hour\n";
        for (int i = 0; i < n; i++)
        {
            cout << fixed << setprecision(2) << "   " << sub[i].Grade_Point << "\t\t\t";
            cout << fixed << setprecision(1) << "    " << sub[i].Credit_Hour << endl;
        }
    }
};

int main()
{
    char choice;
    do
    {
        clearScreen();
        int n;
        cout << "Enter number of subjects :";
        cin >> n;
        CGPA count;
        count.subject_info(n);
        count.display(n);
        count.calculate(n);
        cout << "\n\nDo another? (y/n) :";
        cin >> choice;
    } while (choice != 'n');
}

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}