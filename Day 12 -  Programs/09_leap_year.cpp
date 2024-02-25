// Q9. Write a program to check whether a year is a leap year or not.

#include <iostream>
using namespace std;

int isLeapYear(int year)
{
    if (year % 4 == 0)
        return 1;
    else if (year % 100 == 0)
        return 1;
    else if (year % 400 == 0)
        return 1;
    return 0;
}

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}

/*Output
Enter the year: 2024
2024 is a leap year.

Enter the year: 2025
2025 is not a leap year.
*/