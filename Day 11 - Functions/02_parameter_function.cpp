#include <iostream>
using namespace std;

void printName(string);

int main()
{
    cout << "---Learning Parameter function---" << endl;
    string n;
    cout << "Enter your name " << endl;
    cin >> n;
    printName(n);

    return 0;
}

void printName(string name)
{
    cout << "Hello, " << name << endl;
}

/*Output
---Learning Parameter function---
Enter your name
Ganpat
Hello, Ganpat
*/