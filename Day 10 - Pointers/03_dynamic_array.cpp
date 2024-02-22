#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Dynamic memory allocation---" << endl;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size]; // new keyword is used to allocate memory at runtime

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr; // deallocate the memory

    return 0;
}

/*Output
---Learning Dynamic memory allocation---
Enter the size of the array: 5
Enter the elements of the array: 1
2
3
4
5
The elements of the array are: 1 2 3 4 5
*/