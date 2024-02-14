#include <iostream>
using namespace std;

int var; // global variable

int main()
{
    int var; // local variable

    cout << "Enter the value for global variable" << endl;
    cin >> ::var; // scope resolution operator(::) is used to access global variable

    cout << "Enter the value for local variable" << endl;
    cin >> var;

    cout << "Global variable: " << ::var << endl;
    cout << "local variable: " << var << endl;
    return 0;

    /*Output
    Enter the value for global variable
    5
    Enter the value for local variable
    9
    Global variable: 5
    local variable: 9
    */
}