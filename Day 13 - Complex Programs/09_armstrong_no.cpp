// Q9. Write a program to check whether a given number is a armstrong number or not.
// A armstrong number is equal to the sum of its own digits raised to the power of the number of digits.

#include <iostream>
using namespace std;

int checkArmstrong(int number)
{
    int temp, sum = 0, remainder;
    temp = number;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (checkArmstrong(number))
        cout << number << " is an armstrong number." << endl;
    else
        cout << number << " is not an armstrong number." << endl;

    return 0;
}

// Output
// Enter a number: 153
// 153 is an armstrong number.