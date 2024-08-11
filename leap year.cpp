#include <iostream>  // Include the iostream library for input and output
#include <conio.h>   // Include the conio.h library for console input/output functions (specifically getch)

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library functions

int main()  // Main function where execution starts
{
    int year;  // Declare an integer variable 'year' to store the input year

    // Prompt the user to input a year
    cout << "Input a year: ";
    cin >> year;  // Read the integer input from the user and store it in variable 'year'

    // Check if the year is a leap year
    if (year % 4 == 0 && year % 100 != 0)  // Check if the year is divisible by 4 but not by 100
    {
        cout << "The given input is a leap year";  // If true, it's a leap year
    }
    else if (year % 400 == 0)  // Check if the year is divisible by 400
    {
        cout << "The given input is a leap year";  // If true, it's a leap year
    }
    else  // If neither condition is met
    {
        cout << "The given input is not a leap year";  // It's not a leap year
    }

    getch();  // Wait for a key press before closing the console window (specific to some IDEs like Turbo C++)

    return 0;  // Return 0 to indicate successful execution
}

