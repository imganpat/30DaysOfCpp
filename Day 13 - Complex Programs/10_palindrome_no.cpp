// Q10. Write a program to check whether a given number is a palindrome number or not.

#include <iostream>
using namespace std;

int checkPalindrome(int number)
{
    int temp, remainder, reverse = 0;
    temp = number;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    if (reverse == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (checkPalindrome(number))
        cout << number << " is a palindrome number." << endl;
    else
        cout << number << " is not a palindrome number." << endl;

    return 0;
}

// Output
//  Enter a number: 121
//  121 is a palindrome number.
