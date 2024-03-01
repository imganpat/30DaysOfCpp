#include <iostream>
using namespace std;

int countChar(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            count++;
    return count;
}

int main()
{
    cout << "---Count a character form a string---" << endl;
    string str;
    char c;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Given string : " << str << endl;

    cout << "Enter the character ";
    cin >> c;

    cout << c << " has occured " << countChar(str, c) << " times" << endl;

    return 0;
}

// Output
// ---Count a character form a string---
// Enter the string: Hello world
// Given string : Hello world
// Enter the character l
// l has occured 3 times