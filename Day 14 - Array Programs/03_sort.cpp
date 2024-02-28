// Q3. Write a program to sort an array in ascending and descending order.

#include <iostream>
using namespace std;

// displaying array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// sorting array in ascending order
void assSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    display(arr, n);
}

// sorting array in descending order
void desSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    display(arr, n);
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << "The array in ascending order is: ";
    assSort(array, n);

    cout << "The array in descending order is: ";
    desSort(array, n);

    return 0;
}

// Output
// Enter the size of the array: 6
// Enter the elements of the array: 8
// 3
// 1
// 9
// 4
// 5
// The array in ascending order is: 1 3 4 5 8 9
// The array in descending order is: 9 8 5 4 3 1