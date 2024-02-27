// Q7. Write a program to check whether a given number is prime or not.
// A prime number is a number is only divisible by 1 and itself.

#include <iostream>
using namespace std;

int checkPrime(int number)
{
    int i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (checkPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
    return 0;
}

// Output
//  Enter a number: 5
//  5 is a prime number.
