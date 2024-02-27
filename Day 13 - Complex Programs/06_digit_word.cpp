// Q5. Write a program to print digits of the given number in words.

#include <iostream>
using namespace std;

void digitWord(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    while (reverse > 0)
    {
        int digit = reverse % 10;
        switch (digit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        reverse /= 10;
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    digitWord(number);

    return 0;
}

// Output
// Enter a number: 193
// One Nine Three