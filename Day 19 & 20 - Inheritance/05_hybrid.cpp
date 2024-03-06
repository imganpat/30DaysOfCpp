#include <iostream>
using namespace std;

class Roll_no
{
protected:
    int rollno;

public:
    void display()
    {
        cout << "Roll no: " << rollno << endl;
    }
};

class Name : public Roll_no
{
protected:
    string name;

public:
    void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Marks
{
protected:
    int marks;

public:
    void display()
    {
        cout << "Marks " << marks << endl;
    }
};

class Student : public Name, public Marks
{
public:
    void getdata()
    {
        cout << "Enter roll no name and marks" << endl;
        cin >> rollno >> name >> marks;
    }
    void displayAll()
    {
        Roll_no::display();
        Name::display();
        Marks::display();
    }
};

int main()
{
    Student s1;
    s1.getdata();
    s1.displayAll();
    return 0;
}

// output
// Enter roll no name and marks
// 1
// Ganpat
// 94
// Roll no: 1
// Name: Ganpat
// Marks 94
