// Q2. Write a program to accept a character from user and check if it is a number lowercasde letter or uppercase or special character.

#include <iostream>
using namespace std;

void check(char ch)
{
    if (ch >= '0' && ch <= '9')
        cout << "It is a number." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "It is a lowercase letter." << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << "It is an uppercase letter." << endl;
    else
        cout << "It is a special character." << endl;
}

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    check(ch);
    return 0;
}