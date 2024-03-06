#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

    ~Student(){};
};

class Academic_marks : virtual public Student
{
protected:
    float cpp;
    float web;
    float php;

    ~Academic_marks(){};
};

class Extra_marks : virtual public Student
{
protected:
    float marks;

    ~Extra_marks(){};
};

class Result : public Academic_marks, public Extra_marks
{
public:
    void setData()
    {
        cout << "Enter roll no \n --> ";
        cin >> roll_no;
        cout << "Enter name \n --> ";
        cin >> name;

        cout << "Enter the marks of cpp \n --> ";
        cin >> cpp;
        cout << "Enter the marks of web \n --> ";
        cin >> web;
        cout << "Enter the marks of php \n --> ";
        cin >> php;

        cout << "Enter extra marks \n --> ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;

        cout << "Cpp marks: " << cpp << endl;
        cout << "Web marks: " << web << endl;
        cout << "Php marks: " << php << endl;

        cout << "Extra marks: " << marks << endl;
    }

    inline float getMarks(char subject)
    {
        switch (subject)
        {
        case 'c':
            return cpp;
        case 'w':
            return web;
        case 'p':
            return php;
        case 'e':
            return marks;
        default:
            return 0;
        }
    }
    ~Result(){};
};

inline float total_obtained_marks(Result obj) { return (obj.getMarks('c') + obj.getMarks('w') + obj.getMarks('p') + obj.getMarks('e')); }

inline float percentage(float obtained_marks) { return (100 * (obtained_marks / 400)); }

int main()
{
    Result s1;
    s1.setData();
    s1.display();
    float tp = total_obtained_marks(s1);
    cout << "\n\nTotal marks 400 \n"
         << "Total marks obtained: " << tp << "\n"
         << "Percentage: " << percentage(tp) << "%";

    return 0;
}

// output
// Enter roll no
//  --> 2
// Enter name
//  --> Ganpat
// Enter the marks of cpp
//  --> 90
// Enter the marks of web
//  --> 95
// Enter the marks of php
//  --> 93
// Enter extra marks
//  --> 80
// Roll no: 2
// Name: Ganpat
// Cpp marks: 90
// Web marks: 95
// Php marks: 93
// Extra marks: 80

// Total marks 400
// Total marks obtained: 358
// Percentage: 89.5%