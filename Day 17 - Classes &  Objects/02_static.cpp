// write aprogram to create a class student with data member rollno namea nd class. Write a member function to accept and display student information also diaplay the count of student

#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    string cls;

public:
    static int count;
    void accept()
    {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> cls;
        count++;
    }
    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << cls << endl;
    }

    static void showCount()
    {
        cout << "Total students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;
    s1.accept();
    s2.accept();
    s3.accept();
    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}

//output
// Enter roll no: 1
// Enter name: Ganpat
// Enter class: Bca
// Enter roll no: 2
// Enter name:       
// Joginder
// Enter class: ba
// Enter roll no: 3
// Enter name: neeraj
// Enter class: bcom
// Roll no: 1
// Name: Ganpat
// Class: Bca
// Roll no: 2
// Name: Joginder
// Class: ba
// Roll no: 3
// Name: neeraj
// Class: bcom
// Total students: 3