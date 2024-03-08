#include <iostream>
using namespace std;

class Number
{
    int number;

public:
    Number(int number)
    {
        this->number = number;
    }

    void display()
    {
        cout << "Number: " << number << endl;
    }

    Number &min(Number &obj)
    {
        if (obj.number < this->number)
            return obj;
        else
            return *this;
    }
};

int main()
{
    Number number1(5);
    Number number2(4);
    number1.display();
    number2.display();

    Number number3 = number1.min(number2);
    cout << "Minimum is ";
    number3.display();

    return 0;
}

// output
// Number: 5
// Number: 4
// Minimum is Number: 4