#include <iostream>
#include <cctype> // for tolower function

using namespace std;

int main()
{
    char ch;

    // Prompt the user to input a character
    cout << "Please input a character: ";
    cin >> ch;

    // Convert the character to lowercase to handle both uppercase and lowercase inputs
    ch = tolower(ch);

    // Switch statement to determine if the character is a vowel or consonant
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The given character is a Vowel";
            break;
        default:
            cout << "The given character is a Consonant";
    }

    return 0;
}

