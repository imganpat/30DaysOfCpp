// Q3. Write a program to find the maximum and minimum between two numbers.

#include <iostream>
using namespace std;

void max_min(int n1, int n2)
{
    if (n1 > n2)
        cout << "Maximum is " << n1 << "\nMinimum is " << n2 << endl;
    else
        cout << "Maximum is " << n2 << "\nMinimum is " << n1 << endl;
}

int main()
{
    int number1, number2;
    cout << "Enter the first number " << endl;
    cin >> number1;
    cout << "Enter the second number " << endl;
    cin >> number2;
    max_min(number1, number2);
    return 0;
}

/*Output
Enter the first number
5
Enter the second number
10
Maximum is 10
Minimum is 5
*/