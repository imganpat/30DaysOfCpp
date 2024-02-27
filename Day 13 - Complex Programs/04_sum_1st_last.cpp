// Q4. Write a program to find the sum of first digit and last digit of a number.

#include <iostream>
using namespace std;

int sum(int number)
{
    int last_digit = number % 10;
    int first_digit = number;
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }
    return first_digit + last_digit;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of first and last digit of " << number << " is " << sum(number) << endl;

    return 0;
}

// Output
// Enter a number: 193
// Sum of first and last digit of 193 is 4