#include <iostream>
using namespace std;

class Array2;

class Array1
{
    int arr[5];

public:
    void input()
    {
        cout << "Enter the elements of array 1: " << endl;
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void display()
    {
        cout << "The elements of array 1 are: " << endl;
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    friend int maxElement(Array1, Array2);
};

class Array2
{
    int arr[5];

public:
    void input()
    {
        cout << "Enter the elements of array 1: " << endl;
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void display()
    {
        cout << "The elements of array 1 are: " << endl;
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    friend int maxElement(Array1, Array2);
};

int maxElement(Array1 a, Array2 b)
{
    int max1 = a.arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (a.arr[i] > max1)
            max1 = a.arr[i];
    }

    int max2 = b.arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (b.arr[i] > max2)
            max2 = b.arr[i];
    }

    return max1 > max2 ? max1 : max2;
}

int main()
{
    Array1 a1;
    Array2 a2;
    a1.input();
    a2.input();

    a1.display();
    a2.display();

    cout << "The maximum element is: " << maxElement(a1, a2) << endl;

    return 0;
}

// output

// Enter the elements of array 1:
// 0
// 1
// 3
// 2
// 5
// Enter the elements of array 1:
// 8
// 1
// 4
// 6
// 19
// The elements of array 1 are:
// 0 1 3 2 5
// The elements of array 1 are:
// 8 1 4 6 19
// The maximum element is: 19