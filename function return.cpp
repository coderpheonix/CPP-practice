#include<iostream>
#include<conio.h>

using namespace std;

// Function for addition of the numbers
int addition(int a , int b) {
    int sum = a + b; // Calculate sum
    return sum; // Return sum
}

// Function for subtraction of the numbers
int subtraction(int a , int b) {
    int result = a - b; // Calculate subtraction
    return result; // Return result
}

// Function for multiplication of the numbers
int multiplication(int a , int b) {
    int result = a * b; // Calculate multiplication
    return result; // Return result
}

// Function for division of the numbers
float division(int a, int b) {
    // Check for division by zero
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 as an error indicator
    }
    float result = (float)a / b; // Calculate division
    return result; // Return result
}

int main() {
    int a, b; // Declare integer variables a and b

    // Prompt the user to enter the first value
    cout << "Enter the first value: ";
    cin >> a;

    // Prompt the user to enter the second value
    cout << "Enter the second value: ";
    cin >> b;

    // Perform and display addition
    cout << "Addition: " << addition(a, b) << endl;

    // Perform and display division
    cout << "Division: " << division(a, b) << endl;

    // Perform and display multiplication
    cout << "Multiplication: " << multiplication(a, b) << endl;

    // Perform and display subtraction
    cout << "Subtraction: " << subtraction(a, b) << endl;

    getch(); // Wait for a key press before exiting
    return 0; // Return 0 to indicate successful execution
}
