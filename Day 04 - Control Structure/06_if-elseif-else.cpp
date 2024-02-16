#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning if-elseif-else statement---" << endl;

    int number = 10;
    if (number < 20)
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    else if (number == 10)
    {
        cout << "Inside else if statement" << endl;
        cout << "Number is 10" << endl;
    }
    else
    {
        cout << "Inside else statement" << endl;
        cout << "Number is greater than 20" << endl;
    }
    cout << "Outside if-else if-else statement" << endl;

    cout << " " << endl;

    int number2 = 10;
    if (number2 < 10)
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    else if (number == 10)
    {
        cout << "Inside else if statement" << endl;
        cout << "Number is 10" << endl;
    }
    else
    {
        cout << "Inside else statement" << endl;
        cout << "Number is greater than 20" << endl;
    }
    cout << "Outside if-else if-else statement" << endl;

    cout << " " << endl;

    int number3 = 30;
    if (number3 < 20)
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    else
    {
        cout << "Inside else statement" << endl;
        cout << "Number is greater than 20" << endl;
    }
    cout << "Outside if-else if-else statement" << endl;

    return 0;

    /*  Output
   ---Learning if-elseif-else statement---
    Inside if statement
    Number is less than 20
    Outside if-else if-else statement

    Inside else if statement
    Number is 10
    Outside if-else if-else statement

    Inside else statement
    Number is greater than 20
    Outside if-else if-else statement
    */
}