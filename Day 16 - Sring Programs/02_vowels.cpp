#include <iostream>
#include <cctype>
using namespace std;

int countVowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        if (tolower(s[i]) == 'a' ||
            tolower(s[i]) == 'e' ||
            tolower(s[i]) == 'i' ||
            tolower(s[i]) == 'o' ||
            tolower(s[i]) == 'u')
            count++;
    return count;
}

int main()
{
    cout << "---Count the no. of vowels form a string---" << endl;
    string str;
    char c;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Given string : " << str << endl;

    cout << "There are " << countVowels(str) << " vowels" << endl;

    return 0;
}

// Output
// ---Count the no. of vowels form a string---
// Enter the string: Hello World
// Given string : Hello World
// There are 3 vowels