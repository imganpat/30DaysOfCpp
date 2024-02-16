#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning if-else statement---" << endl;

    int number = 10;
    if (number < 20)
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    else
    {
        cout << "Inside else statement" << endl;
        cout << "Number is greater than 20" << endl;
    }
    cout << "Outside if statement" << endl;

    cout << " " << endl;

    int number2 = 30;
    if (number2 < 20)
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    else
    {
        cout << "Inside else statement" << endl;
        cout << "Number is greater than 20" << endl;
    }
    cout << "Outside if-else statement" << endl;

    return 0;

    /*  Output
    ---Learning if-else statement---
    Inside if statement
    Number is less than 20
    Outside if statement

    Inside else statement
    Number is greater than 20
    Outside if-else statement
    */
}