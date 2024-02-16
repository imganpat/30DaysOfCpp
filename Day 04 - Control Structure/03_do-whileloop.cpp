#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning do-while loop---" << endl;
    int number = 1;
    do
    {
        cout << "Number value: " << number << endl;
        number++;
    } while (number <= 10);

    cout << " " << endl;

    int number2 = 1;
    do
    {
        cout << "Number2 value: " << number2 << endl;
        number2++;
    } while (number2 < 1); // it will  execute once and then condition will be checked

    return 0;

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

    Number2 value: 1
    */
}