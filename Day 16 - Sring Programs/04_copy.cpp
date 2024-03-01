#include <iostream>
using namespace std;

void copy(string s)
{
    string copyString;
    for (int i = 0; i < s.length(); i++)
    {
        copyString += s[i];
    }
    cout << "Coppied string : " << copyString << endl;
}

int main()
{
    cout << "---Copy a string without build-in function---" << endl;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Given string : " << str << endl;

    copy(str);
    return 0;
}

// Output
// ----Copy a string without build-in function---
// Enter the string: hello world
// Given string : hello world
// Coppied string : hello world