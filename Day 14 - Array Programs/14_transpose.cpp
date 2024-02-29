#include <iostream>
using namespace std;

void transpose(int m[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++) {
            temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << "  ";
        cout << endl;
    }
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
    cout << "---Transpose matrix---" << endl;
    int matrix[3][3];

    cout << "Enter matrix" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    cout << "The given matrix is: " << endl;
    display(matrix);

    transpose(matrix);

    return 0;
}

// Output
// ---Sum of lower triangular matrix elements---
// Enter matrix
// 1 2 3 4 5 6 7 8 9
// The given matrix is:
// 1  2  3
// 4  5  6
// 7  8  9
// Sum of lower triangular matrix elements: 34