#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cout << "---Learning Strings Functions---" << endl;
    string str;
    cout << "Enter string: " << endl;
    getline(cin, str);
    cout << "Your string: " << str << endl;

    cout << "Length of string: " << str.length() << endl;

    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;

    str.erase();
    cout << "After earase string: " << str << endl;

    return 0;
}

/*Output
---Learning Strings Functions---
Enter string:
Ganpat c++
Your string: Ganpat c++
Length of string: 10
Reversed string: ++c tapnaG
After earase string:
*/