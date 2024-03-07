#include <iostream>
using namespace std;

class Number
{
    int number;

public:
    Number(int n) : number(n) {}

    inline int operator+(Number object) { return number + object.number; }

    void display()
    {
        cout << "Number " << number << endl;
    }
};

int main()
{
    Number n1(5);
    Number n2(10);
    Number n3 = n1 + n2;

    n1.display();
    n2.display();
    n3.display();

    return 0;
}

// output
// Number 5
// Number 10
// Number 15