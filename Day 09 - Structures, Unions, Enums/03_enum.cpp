#include <iostream>
using namespace std;

enum day
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
}; // stores this as 0, 1, 2, 3, 4, 5, 6
int main()
{
    cout << "---Learning Enums---" << endl;
    cout << "The value of Monday: " << mon << endl;
    cout << "The value of Tuesday: " << tue << endl;
    cout << "The value of Wednesday: " << wed << endl;
    cout << "The value of Thursday: " << thu << endl;
    cout << "The value of Friday: " << fri << endl;
    cout << "The value of Saturday: " << sat << endl;
    cout << "The value of Sunday: " << sun << endl;

    return 0;
}

/*Output
---Learning Enums---
The value of Monday: 0
The value of Tuesday: 1
The value of Wednesday: 2
The value of Thursday: 3
The value of Friday: 4
The value of Saturday: 5
The value of Sunday: 6
*/