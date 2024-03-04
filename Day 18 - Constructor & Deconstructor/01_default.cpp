#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    // default constructior
    Student()
    {
        roll_no = 1;
        name = "Ganpat";
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1; // default constructor called when object is created
    s1.display();
    return 0;
}

// output
// Roll no: 1
// Name: Ganpat