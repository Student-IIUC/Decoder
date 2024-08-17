#include "bits/stdc++.h"

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 52
    int randomNumber = rand() % 52;  // Generates a number in the range 0 to 52 inclusive

    // Output the random number
    cout << "Random number between 0 and 52: " << randomNumber << endl;

    return 0;
}
