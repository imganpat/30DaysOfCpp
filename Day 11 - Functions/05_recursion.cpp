#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1); // it will call itself until n becomes 0
}

int main()
{
    cout << "---Learning Recursion---" << endl;
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}

/*Output
---Learning Recursion---
Enter a number
5
Factorial of 5 is 120
*/