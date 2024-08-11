
#include<iostream>

using namespace std;

// Function to get the first day of the year
int GetFirstDayOfTheYear(int year)
{
    int day = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return day;
}

int main ()
{
    // Arrays to hold the names of the months and the number of days in each month
    char *month[] = {"January", "February", "March", "April" , "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, j, totalDays, weekday = 0, spaceCounter = 0, year;

    // Asking user for the year input
    cout << "Enter a year: ";
    cin >> year;

    // Print the year
    cout << "Welcome to the year " << year << endl;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysInMonth[1] = 29; // February has 29 days in a leap year
    }

    // Get the first day of the year
    weekday = GetFirstDayOfTheYear(year);

    // Loop through each month
    for (i = 0; i < 12; i++)
    {
        // Print month name
        cout << endl << "________" << month[i] << "________" << endl;
        cout << "Sat     Sun     Mon     Tue     Wed     Thu     Fri" << endl;

        // Print leading spaces for the first row of dates
        for (spaceCounter = 1; spaceCounter <= weekday; spaceCounter++)
        {
            cout << "        ";
        }

        // Get the number of days in the current month
        totalDays = daysInMonth[i];

        // Print the days of the month
        for (j = 1; j <= totalDays; j++)
        {
            cout << j << "       ";
            weekday++;
            if (weekday > 6) // Move to the next week
            {
                weekday = 0;
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
