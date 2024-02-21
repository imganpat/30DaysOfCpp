#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Union---" << endl;
    union student
    {
        int roll;
        char name[12]; // size of union is 12 because it is the size of the largest member of the union.
        float percentage;
    };
    student s1;

    // union can store and access only one value at a time.
    cout << "Enter roll student: ";
    cin >> s1.roll;
    cout << "Roll: " << s1.roll << endl;
    cout << "Enter name of student: ";
    cin >> s1.name;
    cout << "Name: " << s1.name << endl;
    cout << "Enter marks of student: ";
    cin >> s1.percentage;
    cout << "Marks: " << s1.percentage << endl;

    cout << "Size of union: " << sizeof(s1) << endl;
    return 0;
}

/*Output
---Learning Union---
Enter roll student: 1
Roll: 1
Enter name of student: Ganpat
Name: Ganpat
Enter marks of student: 99.98
Marks: 99.98
Size of union: 12
*/