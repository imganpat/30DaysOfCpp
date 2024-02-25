// Q6. Write a program to print the previous and next character.

#include <iostream>
using namespace std;

char prev_char(char c)
{
    return c - 1;
}

char next_char(char c)
{
    return c + 1;
}

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Previous character: " << prev_char(c) << endl;
    cout << "Entered character: " << c << endl;
    cout << "Next character: " << next_char(c) << endl;

    return 0;
}

/*Output
Enter a character: G
Previous character: F
Entered character: G
Next character: H
*/