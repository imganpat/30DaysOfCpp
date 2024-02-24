#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "---Learning Function Overloading---" << endl;
    cout << "Calling sum function with two arguments: " << sum(5, 5) << endl;
    cout << "Calling sum function with three arguments: " << sum(5, 5, 5) << endl;

    return 0;
}

/*Output
---Learning Function Overloading---
Calling sum function with two arguments: 10
Calling sum function with three arguments: 15
*/