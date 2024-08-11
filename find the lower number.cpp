#include <iostream>  // Include the iostream library for input and output
#include <conio.h>   // Include the conio.h library for console input/output functions (specifically getch)

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library functions

int main()  // Main function where execution starts
{
    int a, b, c, lower;  // Declare integer variables a, b, c to store input values and lower to store the lowest number

    // Prompt the user to input the value of a
    cout << "Input the value of a: ";
    cin >> a;  // Read the integer input from the user and store it in variable a

    // Prompt the user to input the value of b
    cout << "Input the value of b: ";
    cin >> b;  // Read the integer input from the user and store it in variable b

    // Prompt the user to input the value of c
    cout << "Input the value of c: ";
    cin >> c;  // Read the integer input from the user and store it in variable c

    // Check if a is less than both b and c
    if (a < b && a < c)
    {
        lower = a;  // If a is the lowest, assign a to lower
    }
    // Otherwise, check if b is less than both a and c
    else if (b < a && b < c)
    {
        lower = b;  // If b is the lowest, assign b to lower
    }
    // If neither a nor b is the lowest, c must be the lowest
    else
    {
        lower = c;  // Assign c to lower
    }

    // Output the lowest number
    cout << "The lowest number is: " << lower;

    getch();  // Wait for a key press before closing the console window (specific to some IDEs like Turbo C++)

    return 0;  // Return 0 to indicate successful execution
}
