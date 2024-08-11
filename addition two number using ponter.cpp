#include<iostream> // Include the input-output stream library
#include<conio.h>  // Include the conio.h library for using getch()

using namespace std; // Use the standard namespace

int main() // Main function where execution starts
{
    int a, b; // Declare integer variables a and b

    // Prompt the user to enter the value of a
    cout << "Enter the value of a: ";
    cin >> a; // Read the value of a from user input

    // Prompt the user to enter the value of b
    cout << "Enter the value of b: ";
    cin >> b; // Read the value of b from user input

    int *p1, *p2; // Declare two integer pointers p1 and p2

    p1 = &a; // Store the address of variable a in pointer p1
    p2 = &b; // Store the address of variable b in pointer p2

    int sum = *p1 + *p2; // Dereference p1 and p2 to get the values of a and b, then add them

    // Print the result of the addition
    cout << "The addition of the two numbers is: " << sum << endl;

    getch(); // Wait for a key press before exiting

    return 0; // Return 0 to indicate successful execution
}
  getch();
}
