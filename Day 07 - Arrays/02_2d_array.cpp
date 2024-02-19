#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning 2d Array or matrix---" << endl;
    int i, j, array[3][3];

    // accepting array elements
    cout << "Enter 9 elements" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cin >> array[i][j];

    // printing array elements
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cout << "Element at "<<"[" << i << "]"<< "[" << j << "]"<< " is " << array[i][j] << endl;

    return 0;

    /*
    Representation of 2d array or matrix
    [0][0], [0][1], [0][2],
    [1][0], [1][1], [1][2],
    [2][0], [2][1], [2][2]
    */

    /*Output
    ---Learning 2d Array or matrix---
    Enter 9 elements
    11
    12
    13
    14
    15
    16
    17
    18
    19
    Element at [0][0] is 11
    Element at [0][1] is 12
    Element at [0][2] is 13
    Element at [1][0] is 14
    Element at [1][1] is 15
    Element at [1][2] is 16
    Element at [2][0] is 17
    Element at [2][1] is 18
    Element at [2][2] is 19
    */
}