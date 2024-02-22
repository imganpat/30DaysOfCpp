#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Dynamic memory allocation---" << endl;

    int *ptr = new int; // dynamic allocated mrmory
    cout << "Enter the value of the pointer: ";
    cin >> *ptr;

    cout << "The value of the pointer is: " << *ptr << endl;

    delete ptr; // deallocate the memory

    return 0;
}

/*Output
---Learning Dynamic memory allocation---
Enter the value of the pointer: 50
The value of the pointer is: 50
*/