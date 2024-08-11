#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    // Prompt the user to input the first number
    cout << "Input the value of num1: ";
    cin >> num1;

    // Prompt the user to input the second number
    cout << "Input the value of num2: ";
    cin >> num2;

    // Determine the maximum number using the ternary operator
    int max = (num1 > num2) ? num1 : num2;

    // Display the maximum number
    cout << "The maximum number is: " << max << endl;

    // Optional: Wait for a key press if using an environment that supports this
    // getch(); // Uncomment if getch() is supported

    return 0;
}

