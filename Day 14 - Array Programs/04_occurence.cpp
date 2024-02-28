// Q4. Write a  program to count the occurrence of a given number in an array.

#include <iostream>
using namespace std;

int countOccurence(int array[], int n, int search)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
            count++;
    }
    return count;
}

int main()
{
    int n, search;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << "Enter the number to search: ";
    cin >> search;

    cout << "The number " << search << " occurs " << countOccurence(array, n, search) << " times in the array." << endl;
    return 0;
}

// Output
//  Enter the size of the array: 10
//  Enter the elements of the array: 9
//  1
//  2
//  8
//  3
//  7
//  4
//  6
//  5
//  4
//  Enter the number to search: 4
//  The number 4 occurs 2 times in the array.