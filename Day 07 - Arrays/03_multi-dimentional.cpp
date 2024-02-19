#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning multi-dimentional Array---" << endl;
    int i, j, k, array[2][3][3];

    // it is stored same as 2d array but with one extra 2d array

    // accepting array elements
    cout << "Enter 18 elements" << endl;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                cin >> array[i][j][k];

    // printing array elements
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                cout << "[" << array[i][j][k] << "]";
            cout << endl;
        }
        cout << endl;
    }
    return 0;

    /*Output
    ---Learning multi-dimentional Array---
    Enter 18 elements
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
    12
    13
    14
    15
    16
    17
    18
    [1][2][3]
    [4][5][6]
    [7][8][9]

    [10][11][12]
    [13][14][15]
    [16][17][18]
    */
}