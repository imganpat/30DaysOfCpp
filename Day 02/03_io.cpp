#include <iostream>
using namespace std;

int main()
{
    int number;
    char character;
    float decimal;
    bool learnSomething; // stores yes(1) or no(0) for the asked question

    // input from user
    cout << "Enter a number " << endl;
    cin >> number;
    cout << "Enter a single character " << endl;
    cin >> character;
    cout << "Enter something in decimals " << endl;
    cin >> decimal;
    cout << "Did you learned something new today 1.yes 0.no" << endl;
    cin >> learnSomething;

    // output
    cout << "Number: " << number << endl;
    cout << "Character:  " << character << endl;
    cout << "Decimal number: " << decimal << endl;
    cout << "Answer: " << learnSomething << endl;
    return 0;

    /* Output
    Enter a number
    2
    Enter a single character
    c
    Enter something in decimals
    10.99
    Did you learned something new today 1.yes 0.no
    1
    Number: 2
    Character:  c
    Decimal number: 10.99
    Answer: 1

    */
}