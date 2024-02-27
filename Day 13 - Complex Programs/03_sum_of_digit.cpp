// Q3. Write a program to find the sum of digits of a number.

#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;

    return 0;
}

// Output
// Enter a number: 193
// Sum of digits of 193 is 13
