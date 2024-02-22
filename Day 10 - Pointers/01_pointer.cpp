#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Pointers---" << endl;
    int var = 10;
    int *ptr = &var; // strores the address of var
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl; // &var gives the address of var
    cout << "Value of ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;          // &ptr gives the address of ptr
    cout << "Value at address of ptr: " << *ptr << endl; // *ptr gives the value at the address of ptr

    return 0;
}

/*Output
---Learning Pointers---
Value of var: 10
Address of var: 0x61ff0c
Value of ptr: 0x61ff0c
Address of ptr: 0x61ff08
Value at address of ptr: 10
*/