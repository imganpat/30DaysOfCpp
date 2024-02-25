// Q2. Write a proram to check whether a number is even or odd.

#include <iostream>
using namespace std;

void even_odd(int number)
{
    if (number % 2 == 0)
        cout << "Number is even " << endl;
    else
        cout << "Number is odd " << endl;
}

int main()
{
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    even_odd(number);
    return 0;
}

/*Output
Enter the number
5
Number is odd
*/