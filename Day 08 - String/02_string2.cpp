#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "---Learning Strings---" << endl;
    string name;
    cout << "Enter your full name: " << endl;
    getline(cin, name); // this takes whole sencence including space
    cout << "Your name: " << name << endl;

    return 0;
}

/*Output
---Learning Strings---
Enter your full name:
Ganpat Choudhary
Your name: Ganpat Choudhary
*/