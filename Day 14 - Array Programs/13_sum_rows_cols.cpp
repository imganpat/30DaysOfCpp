#include <iostream>
using namespace std;

void sumOfRows(int m[3][3])
{
    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += m[i][j];
        cout << "Sum of row " << i + 1 << " elements: " << sum << endl;
    }
}

void sumOfCols(int m[3][3])
{
    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += m[j][i];
        cout << "Sum of col " << i + 1 << " elements: " << sum << endl;
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
    cout << "---Sum of each row & column---" << endl;
    int matrix[3][3];

    cout << "Enter matrix" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    display(matrix);

    sumOfRows(matrix);

    sumOfCols(matrix);

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
// Sum of row 1 elements: 6
// Sum of row 2 elements: 15
// Sum of row 3 elements: 24
// Sum of col 1 elements: 12
// Sum of col 2 elements: 15
// Sum of col 3 elements: 18