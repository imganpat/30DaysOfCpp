// Q7. Write a program to check whether a character is a vowel or consonant.

#include <iostream>
#include <cctype>
using namespace std;

int check_vowel(char character)
{
    character = tolower(character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        return 1;
    return 0;
}

int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;
    if (check_vowel(character))
        cout << character << " is vowel" << endl;
    else
        cout << character << " is not vowel" << endl;
    return 0;
}

/*Output
Enter a character: g
g is not vowel

Enter a character: G
G is not vowel

Enter a character: a
a is vowel

Enter a character: A
A is vowel
*/