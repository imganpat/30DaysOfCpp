#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning while loop---" << endl;
    int number = 1;
    while (number <= 10)
    {
        cout << "Number value: " << number << endl;
        number++;
    }

    /*    Output
    ---Learning while loop---
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