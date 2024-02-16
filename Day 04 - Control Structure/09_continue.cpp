#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning continue stetement---" << endl;
    int number = 1;
    for (; number <= 10; number++)
    {
        if (number == 5)
        {
            // skip the current iteration when number becomes 5
            cout << "Skiped..." << endl;
            continue;
        }
        cout << "Number : " << number << endl;
    }

    return 0;

    /*  Output
    ---Learning continue stetement---
    Number : 1
    Number : 2
    Number : 3
    Number : 4
    Skiped...
    Number : 6
    Number : 7
    Number : 8
    Number : 9
    Number : 10
    */
}