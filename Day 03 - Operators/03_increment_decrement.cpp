#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Increment/Decrement operators" << endl;
    cout << " " << endl;

    int number = 10;

    cout << "Number : " << number << endl;
    cout << " " << endl;

    // increment
    cout << "After pre increment(++number) : " << ++number << endl;

    number = 10;

    cout << "After post increment(number++) : " << number++ << endl;
    cout << "After post : " << number << endl;

    cout << " " << endl;


    // decrement
    number = 10;
    cout << "After pre decrement(--number) : " << --number << endl;

    number = 10;

    cout << "After post decrement(number--) : " << number-- << endl;
    cout << "After post : " << number << endl;

    return 0;


    // Output
    /* ---Learning Increment/Decrement operators

    Number : 10

    After pre increment(++number) : 11
    After post increment(number++) : 10
    After post : 11

    After pre decrement(--number) : 9
    After post decrement(number--) : 10
    After post : 9

    */
}