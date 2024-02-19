#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning 1d Array---" << endl;
    int index, array[10]; // array of size 10 it will store 10 elements and they can be accesed by the index. Indexing starts with 0

    // accepting array elements
    cout << "Enter 10 elements" << endl;
    for (index = 0; index < 10; index++)
    {
        cin >> array[index];
    }

    // printing array elements
    for (index = 0; index < 10; index++)
    {
        cout << "Element at index " << index << " is " << array[index] << endl;
    }

    return 0;

    /*Output
    ---Learning 1d Array---
    Enter 10 elements
    11
    12
    13
    14
    15
    16
    17
    18
    19
    20
    Element at index 0 is 11
    Element at index 1 is 12
    Element at index 2 is 13
    Element at index 3 is 14
    Element at index 4 is 15
    Element at index 5 is 16
    Element at index 6 is 17
    Element at index 7 is 18
    Element at index 8 is 19
    Element at index 9 is 20
    */
}