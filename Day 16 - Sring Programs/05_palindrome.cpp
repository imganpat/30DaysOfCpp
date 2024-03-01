
#include <iostream>
#include <algorithm>
using namespace std;

int isPalindrome(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s)
        return 1;
    else
        return 0;

    return 1;
}

int main()
{
    cout << "---Copy a string without build-in function---" << endl;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Given string : " << str << endl;

    if (isPalindrome(str))
        cout << "Given string is palindrome" << endl;
    else
        cout << "Given string is not palindrome" << endl;

    return 0;
}

// Output
//  ---Copy a string without build-in function---
//  Enter the string: anna
//  Given string : anna
//  Given string is palindrome