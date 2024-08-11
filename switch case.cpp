#include <iostream>
// Uncomment the line below if your compiler supports conio.h
// #include <conio.h>

using namespace std;

int main()
{
    int num;

    // Prompt the user to input a number
    cout << "Please input a value range 1-10: ";
    cin >> num;

    // Switch statement to determine the corresponding word for the number
    switch (num)
    {
        case 1:
            cout << "The given number is One";
            break;
        case 2:
            cout << "The given number is Two";
            break;
        case 3:
            cout << "The given number is Three";
            break;
        case 4:
            cout << "The given number is Four";
            break;
        case 5:
            cout << "The given number is Five";
            break;
        case 6:
            cout << "The given number is Six";
            break;
        case 7:
            cout << "The given number is Seven";
            break;
        case 8:
            cout << "The given number is Eight";
            break;
        case 9:
            cout << "The given number is Nine";
            break;
        case 10:
            cout << "The given number is Ten";
            break;
        default:
            cout << "Invalid Input";
    }

    // Optional: Wait for a key press if using an environment that supports this
    // getch(); // Uncomment if getch() is supported

    return 0;
}
