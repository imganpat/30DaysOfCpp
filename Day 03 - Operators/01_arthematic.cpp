#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    // accepting two numbers formuser
    cout << "Enter number 1 and number 2 " << endl;
    cin >> number1 >> number2;

    // displaying the values of number 1 and number 2
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;

    // displaying result after arthematic operations
    cout << "Addition operator: " << number1 + number2 << endl;
    cout << "Substracton operator: " << number1 - number2 << endl;
    cout << "Multiplication operator: " << number1 * number2 << endl;
    cout << "Division operator: " << number1 / number2 << endl;
    cout << "Modulos operator: " << number1 % number2 << endl; // returns the remainder
    return 0;

    // -------Output---------
    /*
    Enter number 1 and number 2
    10
    3
    Number 1 : 10
    Number 2 : 3
    Addition operator: 13
    Substracton operator: 7
    Multiplication operator: 30
    Division operator: 3
    Modulos operator: 1
    */
}