#include <iostream>
using namespace std;

int main()
{
    const float constVar = 3.14;
    float normalVar = 9.16;
    cout << "Constant variable: " << constVar << endl;
    cout << "Normal variable: " << normalVar << endl;

    /*
    constVar = 3.145;
    cannot change the value of a const variable
    */

    normalVar = 6.19;
    cout << "Normal variable: After update " << normalVar << endl;
    return 0;

    /* Output
    Constant variable: 3.14
    Normal variable: 9.16
    Normal variable: After update 6.19
    */
}