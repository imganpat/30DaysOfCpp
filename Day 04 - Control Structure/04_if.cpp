#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning if statement---" << endl;
    int number = 10;
    if (number < 20) // condition true runs if block
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    cout << "Outside if statement" << endl;

    cout << " " << endl;

    int number2 = 10;
    if (number2 < 5) // condition false skips the if block
    {
        cout << "Inside if statement" << endl;
        cout << "Number is less than 20" << endl;
    }
    cout << "Outside if statement" << endl;

    return 0;


    /*  Output
    ---Learning if statement---
    Inside if statement
    Number is less than 20
    Outside if statement

    Outside if statement

     */
}