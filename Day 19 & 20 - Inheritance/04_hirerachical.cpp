#include <iostream>
using namespace std;

class Employee
{
protected:
    int employee_code;
    string name;
    void getdata()
    {
        cout << "Enter employee code: \n --> ";
        cin >> employee_code;
        cout << "Enter name \n --> ";
        cin >> name;
    }

    void display()
    {
        cout << "Employee id: " << employee_code << endl;
        cout << "Name: " << name << endl;
    }
};

class Fulltime : public Employee
{
protected:
    int daily_rate, no_of_days, salary;

public:
    void getdata()
    {
        Employee ::getdata();
        cout << "Enter daily rate: \n --> ";
        cin >> daily_rate;
        cout << "Enter no of days \n --> ";
        cin >> no_of_days;
        cout << "Enter salary: \n --> ";
        cin >> salary;
    }

    void display()
    {
        Employee ::display();
        cout << "Daily rate: " << daily_rate << endl;
        cout << "No of days: " << no_of_days << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Partime : public Employee
{
private:
    int no_of_working_hours, hourly_rate, salary;

public:
    void getData()
    {
        Employee ::getdata();
        cout << "Enter no of working hours: \n --> ";
        cin >> no_of_working_hours;
        cout << "Enter hourly rate: \n --> ";
        cin >> hourly_rate;
        cout << "Enter salary: \n --> ";
        cin >> salary;
    }
    void display()
    {
        Employee ::display();
        cout << "No of working days: " << no_of_working_hours << endl;
        cout << "Hourly rate: " << hourly_rate << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    cout << "----------Fulltime----------" << endl;
    Fulltime f1;
    f1.getdata();
    f1.display();
    cout << "----------------------------" << endl;

    cout << "----------Parttime----------" << endl;
    Partime p1;
    p1.getData();
    p1.display();
    cout << "----------------------------" << endl;

    return 0;
}

// output
//----------Fulltime----------
// Enter employee code:
//  --> 1
// Enter name
//  --> Ganpat
// Enter daily rate:
//  --> 1000
// Enter no of days
//  --> 20
// Enter salary:
//  --> 80000
// Employee id: 1
// Name: Ganpat
// Daily rate: 1000
// No of days: 20
// Salary: 80000
//----------------------------
//----------Parttime----------
// Enter employee code:
//  --> 2
// Enter name
//  --> Rahul
// Enter no of working hours:
//  --> 10
// Enter hourly rate:
//  --> 100
// Enter salary:
//  --> 50000
// Employee id: 2
// Name: Rahul
// No of working days: 10
// Hourly rate: 100
// Salary: 50000
//----------------------------