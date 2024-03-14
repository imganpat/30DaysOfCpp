#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void initArray(T array[], int size)
{
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

template <class T>
void display(T array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

template <class T>
void ascending(T array[], int size)
{
    sort(array, array + size);
    cout << "After sorting: ";

    display(array, size);
}

int main()
{
    int n, i;

    cout << "Enter the size for int array ";
    cin >> n;

    int array[n];

    initArray(array, n);
    cout << "Given Array: ";
    display(array, n);
    cout << endl;
    ascending(array, n);

    cout << "\n\nEnter the size for char array ";
    cin >> n;

    char char_array[n];

    initArray(char_array, n);
    cout << "Given Array: ";
    display(char_array, n);
    cout << endl;
    ascending(char_array, n);

    return 0;
}

// output
//  Enter the size for int array 5
//  9
//  2
//  7
//  1
//  4
//  Given Array: 9 2 7 1 4
//  After sorting: 1 2 4 7 9

// Enter the size for char array 6
// g
// a
// n
// p
// a
// t
// Given Array: g a n p a t
// After sorting: a a g n p t