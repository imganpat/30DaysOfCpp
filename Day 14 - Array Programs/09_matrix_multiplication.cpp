#include <iostream>
using namespace std;

void display(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << "  ";
        cout << endl;
    }
}

void multiply(int a[3][3], int b[3][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    cout << "Multiplication of matrix:" << endl;
    display(c);
}

int main()
{
    cout << "---Multiplication of 2 matrix---" << endl;
    int A[3][3], B[3][3];
    cout << "Enter matrix A" << endl;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter matrix B" << endl;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];

    cout << "Matrix A:" << endl;
    display(A);
    cout << "Matrix B:" << endl;
    display(B);

    multiply(A, B);
    return 0;
}

// Output
// ---Multiplication of 2 matrix---
// Enter matrix A
// 1 2 3 4 5 6 7 8 9
// Enter matrix B
// 1 2 3 4 5 6 7 8 9
// Matrix A:
// 1  2  3
// 4  5  6
// 7  8  9
// Matrix B:
// 1  2  3
// 4  5  6
// 7  8  9
// Multiplication of matrix:
// 30  36  42
// 66  81  96
// 102  126  150