#include <iostream>
using namespace std;

int sizeOfString(string str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    cout << "---Length of string without build in function---" << endl;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Given string : " << str << endl;

    cout << "Length of string is " << sizeOfString(str) << endl;

    return 0;
}

// Output
// ---Length of string without build in function---
// Enter the string: hello world
// Given string : hello world
// Length of string is 11