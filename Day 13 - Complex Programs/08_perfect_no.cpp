// Q8. Write a program to check whether a given number is a perfect number or not.
// A perfect number is a number that is equal to the sum of its proper divisors, excluding itself.

#include <iostream>
using namespace std;

int checkPerfect(int number)
{
    int i, sum = 0;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
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

    if (checkPerfect(number))
        cout << number << " is a perfect number." << endl;
    else
        cout << number << " is not a perfect number." << endl;

    return 0;
}

// Output
//  Enter a number: 6
//  6 is a perfect number.
