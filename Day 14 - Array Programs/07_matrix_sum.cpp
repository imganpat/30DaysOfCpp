#include <iostream>
using namespace std;

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

int sum(int m[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum += m[i][j];
    return sum;
}

int main()
{
    cout << "Sum of matrix elements" << endl;
    int matrix[3][3];
    cout << "Enter matrix elements" << endl;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    display(matrix);

    cout << "Sum of matrix elements: " << sum(matrix) << endl;

    return 0;
}

// Output
// Sum of matrix elements
// Enter matrix elements
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// The given matrix is:
// 1  2  3
// 4  5  6
// 7  8  9
// Sum of matrix elements: 45