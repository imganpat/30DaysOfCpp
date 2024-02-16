#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning For Loop---" << endl;
    cout << " " << endl;

    int number;
    for (number = 1; number <= 10; number++)
    {
        cout << "Number value: " << number << endl;
    }

    // Output
    /*
    ---Learning For Loop---

    Number value: 1
    Number value: 2
    Number value: 3
    Number value: 4
    Number value: 5
    Number value: 6
    Number value: 7
    Number value: 8
    Number value: 9
    Number value: 10
        */
    return 0;
}