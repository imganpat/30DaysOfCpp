#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    // default parameter parameterised constructior
    Student(string n, int r = 1)
    {
        roll_no = r;
        name = n;
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    string name;
    cout << "Enter Name " << endl;
    cin >> name;

    Student s1(name);
    s1.display();

    return 0;
}

// output
// Enter Name
// Ganpat
// Roll no: 1
// Name: Ganpat