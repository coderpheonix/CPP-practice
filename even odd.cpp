#include <iostream>

using namespace std;

int main()
{
    int num;

    // Prompt the user to input an integer
    cout << "Input an Integer: ";
    cin >> num;

    // Determine if the number is even or odd using the ternary operator
    (num % 2 == 0) ? cout << "The given number is even" : cout << "The given number is odd";

    // Optional: Wait for a key press if using an environment that supports this
    // getch(); // Uncomment if getch() is supported

    return 0;
}
