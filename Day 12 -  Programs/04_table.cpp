// Q4. Write a program to print the multiplication table of a number entered by the user.

#include <iostream>
using namespace std;

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main()
{
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    table(number);
    return 0;
}

/*Output
Enter the number
5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/