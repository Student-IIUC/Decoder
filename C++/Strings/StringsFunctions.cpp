#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    // Check if character is alphanumeric
    cout << "isalnum : " << endl;

    cout << "C is alphanumeric : " << isalnum('C') << endl;
    cout << "^ is alphanumeric : " << isalnum('^') << endl;

    // Can use this as a test condition
    char input_char{'*'};

    if (isalnum(input_char))
        cout << input_char << " is alphanumeric." << endl;
    else
        cout << input_char << " is not alphanumeric." << endl;
    */

    /*
    // Check if character is alphabet
    cout << "isalpha : " << endl;

    char input_char{'7'};

    if (isalpha(input_char))
        cout << input_char << " is alphabet." << endl;
    else
        cout << input_char << " is not alphabet." << endl;
    */

    
    // Check if a character is blank
    cout << "isblank : " << endl;

    string message {"Hello! How are you? What are you doing now?"};
    cout << "message : " << message << endl;

    // Find and print blank index
    int blank_count{};
    for (auto i{0}; i < message.size(); i++)
    {
        if (isblank(message[i]))
        {
            cout << "Found a blank character at index : [" << i << "]" << endl;
            blank_count++;
        }
    }
    cout << "Total we found " << blank_count << " blank characters." << endl;
    

    /*
    // Check if character is lowercase or uppercase
    cout << "islower and isupper : " << endl;

    string thought {"C++ Programming language is one of the greatest language in Modern Times"};
    int lowercase_count{};
    int uppercase_count{};

    // Print original string for ease of comparison on the terminal
    cout << "Original string : " << thought << endl;

    for (auto character : thought)
    {
        if (islower(character))
        {
            cout << " " << character;
            lowercase_count++;
        }

        else if (isupper(character))
        {
            cout << " " << character;
            uppercase_count++;
        }
    }
    cout << endl;
    cout << "Found " << lowercase_count << " lowercase characters and "
         << uppercase_count << " uppercase characters." << endl;
    */

    /*
    // Check if a character is a digit
    cout << "isdigit : " << endl;

    string statement {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
    cout <<"statement : " << statement << endl;

    int digit_count{};

    for (auto character : statement)
    {
        if (isdigit(character))
        {
            cout << "Found digit : " << character << endl;
            digit_count++;
        }
    }
    cout << "Found " << digit_count << " digits in the statement string" << endl;
    */

    /*
    // Turning a character lowercase to uppercase and uppercase to lower case
    cout << "tolower and toupper : " << endl;

    string original_str {"Finally, I'm Home."};
    char dest_str[original_str.size()];

    // Turn this to uppercase. Change the array in place
    for (auto i{0}; i < original_str.size(); i++)
        dest_str[i] = toupper(original_str[i]);
    cout << "Original string : " << original_str << endl;
    cout << "Uppercase string : " << dest_str << endl;

    // Turn this to lowercase. Change the array in place
    for (auto i{0}; i < original_str.size(); i++)
        dest_str[i] = tolower(original_str[i]);

    cout << "Lowercase string : " << dest_str << endl;
    */
}