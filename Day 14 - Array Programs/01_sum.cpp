// Q1. Write a program to find the sum of all elements of an array.

#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
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

    cout << "The sum of the elements of the array is: " << sum(array, n);
    return 0;
}

// Output
//  Enter the size of the array: 5
//  Enter the elements of the array: 1 2 3 4 5
//  The sum of the elements of the array is: 15