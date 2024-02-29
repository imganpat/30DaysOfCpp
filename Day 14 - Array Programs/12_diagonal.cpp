#include <iostream>
using namespace std;

int sumOfDiagonalEle(int m[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i == j)
                sum += m[i][j];
    return sum;
}

void display(int m[3][3])
{
    cout << "The given matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << "  ";
        cout << endl;
    }
}

int main()
{
    cout << "---Sum of diagonal matrix elements---" << endl;
    int matrix[3][3];

    cout << "Enter matrix" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    display(matrix);

    cout << "Sum of diagonal matrix elements: " << sumOfDiagonalEle(matrix) << endl;

    return 0;
}

// Output
// ---Sum of diagonal matrix elements---
// Enter matrix
// 1 2 3 4 5 6 7 8 9
// The given matrix is:
// 1  2  3
// 4  5  6
// 7  8  9
// Sum of diagonal matrix elements: 15