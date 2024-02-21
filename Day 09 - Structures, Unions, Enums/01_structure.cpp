#include <iostream>
using namespace std;

struct student
{
    int roll;         // 4 bytes
    char name[10];    // 10 bytes
    float percentage; // 4 bytes
};

int main()
{
    cout << "---Learning Structure---" << endl;
    student s1;
    cout << "Enter roll, name and marks of student: ";
    // structure member access operator (.) is used to access the members of a structure variable.
    cin >> s1.roll >> s1.name >> s1.percentage;
    
    cout << "Roll: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.percentage << endl;
    
    return 0;
}

/*Output
---Learning Structure---
Enter roll, name and marks of student: 1
Ganpat
99.98
Roll: 1
Name: Ganpat
Marks: 99.98
Size of structure: 20
*/