
#include <iostream> // Include the iostream library for input and output
#include<conio.h>
#include<iomanip>

using namespace std; // Use the standard namespace

int main()
{
    float a, b; // Declare two integer variables a and b

    // Prompt the user to input the value of a
    cout << "Input the value of a: ";
    cin >> a; // Read the value of a from user input

    // Prompt the user to input the value of b
    cout << "Input the value of b: ";
    cin >> b; // Read the value of b from user input

    // Perform arithmetic operations
    float sum = a + b; // Sum of a and b
    double division =   (float) (a) / b;
    //double division = static_cast<double>(a) / b; // Division of a by b, cast to double for floating-point division
    float subtraction = a - b; // Subtraction of b from a
    float multiplication = a * b; // Multiplication of a and b





    cout <<showpoint; // for showpoint
    cout << fixed; // how many digit i wanna get output
    cout<<setprecision(10); // for printing ten degit





    // Display the results of the arithmetic operations



    cout << "The summation of the two numbers is: " << sum << endl;
    cout << "The subtraction of the two numbers is: " << subtraction << endl;
    cout << "The multiplication of the two numbers is: " << multiplication << endl;
    cout << "The division of the two numbers is: " << division << endl;

    return 0; // Return 0 to indicate that the program ended successfully
}

