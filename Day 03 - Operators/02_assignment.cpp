#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Assignment operators---" << endl;
    cout << " " << endl;

    int number, number2, number3, number4;

    number = 10;  // used for +=
    number2 = 10; // used for -=
    number3 = 10; // used for *=
    number4 = 10; // used for /=

    cout << "number : " << number << endl;
    cout << "number2 : " << number2 << endl;
    cout << "number3 : " << number3 << endl;
    cout << "number4 : " << number4 << endl;

    cout << " " << endl;

    number += 2; // First add and then assign
    cout << "After += assignment number : " << number << endl;

    number2 -= 2; // First substract and then assign
    cout << "After -= assignment number2 : " << number2 << endl;

    number3 *= 2; // First multiply and then assign
    cout << "After *= assignment number3 : " << number3 << endl;

    number4 /= 2; // First devide and then assign
    cout << "After /= assignment number4 : " << number4 << endl;

    return 0;

    // Output
    /* ---Learning Assignment operators---

    number : 10
    number2 : 10
    number3 : 10
    number4 : 10

    After += assignment number : 12
    After -= assignment number2 : 8
    After *= assignment number3 : 20
    After /= assignment number4 : 5
    */
}