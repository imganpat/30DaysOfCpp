// Q5. Write a program to count the number of zeros, even and odd digits in a given number.

#include <iostream>
using namespace std;

void count(int number)
{
    int zeroCount = 0, evenCount = 0, oddCount = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (digit == 0)
            zeroCount++;
        else if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        number /= 10;
    }
    cout << "Number of zeros: " << zeroCount << endl;
    cout << "Number of even digits: " << evenCount << endl;
    cout << "Number of odd digits: " << oddCount << endl;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    count(number);
    return 0;
}

// Output
//  Enter a number: 230
//  Number of zeros: 1
//  Number of even digits: 1
//  Number of odd digits: 1