// Q5. Write a program to find the union of two arrays.

#include <iostream>
using namespace std;

// displaying array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// print the union of two arrays
void unionArray(int array1[], int n1, int array2[], int n2)
{
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
            cout << array1[i++] << " ";
        else if (array2[j] < array1[i])
            cout << array2[j++] << " ";
        else
        {
            cout << array2[j++] << " ";
            i++;
        }
    }

    while (i < n1)
        cout << array1[i++] << " ";
    while (j < n2)
        cout << array2[j++] << " ";
}

int main()
{
    int n1, n2;

    cout << "Enter the size of the First array: ";
    cin >> n1;

    cout << "Enter the size of the Second array: ";
    cin >> n2;

    int array1[n1], array2[n2];

    cout << "Enter the elements of the First array: ";
    for (int i = 0; i < n1; i++)
        cin >> array1[i];

    cout << "Enter the elements of the Second array: ";
    for (int i = 0; i < n2; i++)
        cin >> array2[i];

    cout << "The First array is: ";
    display(array1, n1);

    cout << "The Second array is: ";
    display(array2, n2);

    cout << "The Union of the two arrays is: ";
    unionArray(array1, n1, array2, n2);

    return 0;
}

// Output
// Enter the size of the First array: 5
// Enter the size of the Second array: 5
// Enter the elements of the First array: 1
// 2
// 3
// 6
// 7
// Enter the elements of the Second array: 2
// 9
// 5
// 8
// 0
// The First array is: 1 2 3 6 7
// The Second array is: 2 9 5 8 0
// The Union of the two arrays is: 1 2 3 6 7 9 5 8 0