#include <iostream>
using namespace std;

class Number2;

class Number1
{
    int a = 5;
    friend Number2;
};

class Number2
{
    int b = 3;

public:
    int multiply(Number1 &n1, Number2 &n2) // passing throufh reference to avoid copying
    {
        return n1.a * n2.b;
    }
};

int main()
{
    Number1 n1;
    Number2 n2;
    cout << "The product of a and b is: " << n2.multiply(n1, n2) << endl;
    return 0;
}