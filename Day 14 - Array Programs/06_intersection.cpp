// Q.6 Write a program to find the intersection of two arrays.

#include <iostream>
using namespace std;

// displaying array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// print the intersection of two arrays
void intersectionArray(int array1[], int n1, int array2[], int n2)
{
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
            i++;
        else if (array2[j] < array1[i])
            j++;
        else
        {
            cout << array2[j++] << " ";
            i++;
        }
    }
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

    cout << "The Intersection of the two arrays is: ";
    intersectionArray(array1, n1, array2, n2);

    return 0;
}