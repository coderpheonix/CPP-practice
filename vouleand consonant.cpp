#include <iostream>  // Include the iostream library for input and output
#include <conio.h>   // Include the conio.h library for console input/output functions (specifically getch)

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library functions

int main()  // Main function where execution starts
{
    char ch;  // Declare a variable of type char to store the input character

    cout << "Please input a character: ";  // Prompt the user to input a character

    cin >> ch;  // Read the character input from the user

    // Check if the input character is a vowel (either lowercase or uppercase)
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    {
        // If the character is a vowel, print this message
        cout << "The given character is a Vowel";
    }
    else
    {
        // If the character is not a vowel, print this message
        cout << "The given character is a Consonant";
    }

    getch();  // Wait for a key press before closing the console window (specific to some IDEs like Turbo C++)

    return 0;  // Return 0 to indicate successful execution
}

