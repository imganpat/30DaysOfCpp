#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    float marks;

public:
    // parameterised costructor
    Student(int r, string n)
    {
        roll_no = r;
        name = n;
    }

    // copy costructor
    Student(Student &object)
    {
        roll_no = 2;
        name = object.name;
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
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

    cout << "Coping the values of s1 into s2" << endl;
    Student s2(s1);
    s2.display();

    return 0;
}

// output
// Enter Roll no and Name
// 1
// Ganpat
// Roll no: 1
// Name: Ganpat
// Coping the values of s1 into s2
// Roll no: 2
// Name: Ganpat