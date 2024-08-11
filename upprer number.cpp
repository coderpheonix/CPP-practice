#include <iostream>  // Include the iostream library for input and output
#include <conio.h>   // Include the conio.h library for console input/output functions (specifically getch)

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library functions

int main()  // Main function where execution starts
{
    int a, b, c, largest;  // Declare integer variables a, b, c to store input values and largest to store the largest number

    // Prompt the user to input the value of a
    cout << "Input the value of a: ";
    cin >> a;  // Read the integer input from the user and store it in variable a

    // Prompt the user to input the value of b
    cout << "Input the value of b: ";
    cin >> b;  // Read the integer input from the user and store it in variable b

    // Prompt the user to input the value of c
    cout << "Input the value of c: ";
    cin >> c;  // Read the integer input from the user and store it in variable c

    // Check if a is greater than both b and c
    if (a > b && a > c)
    {
        largest = a;  // If a is the largest, assign a to largest
    }
    // Otherwise, check if b is greater than both a and c
    else if (b > a && b > c)
    {
        largest = b;  // If b is the largest, assign b to largest
    }
    // If neither a nor b is the largest, c must be the largest
    else
    {
        largest = c;  // Assign c to largest
    }

    // Output the largest number
    cout << "The largest number is: " << largest;

    getch();  // Wait for a key press before closing the console window (specific to some IDEs like Turbo C++)

    return 0;  // Return 0 to indicate successful execution
}
