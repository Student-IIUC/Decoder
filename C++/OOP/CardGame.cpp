#include "bits/stdc++.h"

using namespace std;

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};
const int jack = 11;  // from 2 to 10 are
const int queen = 12; // integers without names
const int king = 13;
const int ace = 14;
class card
{
private:
    int number; // 2 to 10, jack, queen, king, ace
    Suit suit;  // clubs, diamonds, hearts, spades
public:
    void init(int n, Suit s) // initialize card
    {
        suit = s;
        number = n;
    }
    void display() // display the card
    {
        if (number >= 2 && number <= 10)
            cout << number;
        else
            switch (number)
            {
            case jack:
                cout << "J";
                break;
            case queen:
                cout << "Q";
                break;
            case king:
                cout << "K";
                break;
            case ace:
                cout << "A";
                break;
            }
        switch (suit)
        {
        case clubs:
            cout << 'c';
            break;
        case diamonds:
            cout << 'd';
            break;
        case hearts:
            cout << 'h';
            break;
        case spades:
            cout << 's';
            break;
        }
    } // end display()
}; // end class card
int main()
{
    card deck[52]; // deck of cards
    int j = 0;     // counts thru deck
    int num;       // card number
    cout << endl;
    for (num = 2; num <= 14; num++) // for each number
    {
        deck[j].init(num, clubs);         // set club
        deck[j + 13].init(num, diamonds); // set diamond
        deck[j + 26].init(num, hearts);   // set heart
        deck[j++ + 39].init(num, spades); // set spade
    }
    cout << "\nOrdered deck :\n";
    for (j = 0; j < 52; j++) // display ordered deck
    {
        deck[j].display();
        cout << " ";
        if (!((j + 1) % 13)) // newline every 13 cards
            cout << endl;
    }
    srand(time(0));           // seed random number generator
    for (j = 0; j < 52; j++) // for each card in the deck,
    {
        // rand(a,b) gives a number in the range [a,b] and could be implemented as rand() % (b - a + 1) + a .
        int k = rand() % 52 + 0;  // pick another card at random
        card temp = deck[j]; // and swap them
        deck[j] = deck[k];
        deck[k] = temp;
    }
    cout << "\nShuffled deck :\n";
    for (j = 0; j < 52; j++) // display shuffled deck
    {
        deck[j].display();
        cout << " ";
        if (!((j + 1) % 13)) // newline every 13 cards
            cout << endl;
    }
} // end main