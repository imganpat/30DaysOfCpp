#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    // parameterised constructior
    Student(int r, string n)
    {
        roll_no = r;
        name = n;
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }

    // deconstructor gets executed when there is no need of the object or at the end of the program
    ~Student()
    {
        cout << "Deconstructor called !!! Deleting the object" << endl;
    }
};

int main()
{
    int rno;
    string name;
    cout << "Enter Roll no and Name " << endl;
    cin >> rno >> name;

    Student s1(rno, name);
    s1.display();

    return 0;
}

// output
// Enter Roll no and Name
// 1
// Ganpat
// Roll no: 1
// Name: Ganpat
// Deconstructor called !!! Deleting the object
