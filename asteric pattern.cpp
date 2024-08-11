
#include<iostream>  // Include the input-output stream library for using cin and cout

using namespace std;  // Use the standard namespace to avoid prefixing std:: to cout and cin

int main()  // Main function where execution starts
{
    int row, i, n, col;  // Declare integer variables for row, column, and number of lines

    cout<< "Enter number of lines: ";  // Prompt the user to enter the number of lines
    cin>> n;  // Read the number of lines from the user and store it in variable n

    for (row=1; row<=n; row++)  // Outer loop to iterate through each row from 1 to n
    {
        for (col = 1; col<= row; col++ )  // Inner loop to iterate through each column from 1 to the current row number
        {
            cout <<" * ";  // Print the asteric sign

        }

        cout << endl;  // Print a newline character to move to the next row
    }

    return 0;  // Return 0 to indicate successful execution
}
