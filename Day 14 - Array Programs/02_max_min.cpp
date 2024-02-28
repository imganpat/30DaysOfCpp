// Q2. Write a program to find the maximum and minimum elements of an array.

#include <iostream>
using namespace std;

int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
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

    cout << "The minimum element of the array is: " << min(array, n) << endl;
    cout << "The maximum element of the array is: " << max(array, n) << endl;

    return 0;
}

// Output
// Enter the size of the array: 6
// Enter the elements of the array: 9
// 1
// 4
// 0
// 3
// 8
// The minimum element of the array is: 0
// The maximum element of the array is: 9