#include <iostream>
using namespace std;

class Employee
{
private:
    int id, salary;
    string name, department;

public:
    void setData()
    {
        cout << "Enter Employee id : " << endl;
        cin >> id;
        cout << "Enter Employee name : " << endl;
        cin >> name;
        cout << "Enter Employee department : " << endl;
        cin >> department;
        cout << "Enter Employee salary : " << endl;
        cin >> salary;
    }

    void getData()
    {
        cout << "Employee id : " << id << endl;
        cout << "Employee name : " << name << endl;
        cout << "Employee department : " << department << endl;
        cout << "Employee salary : " << salary << endl;
        cout << "\n";
    }
};

int main()
{
    int n;
    cout << "Enter the number of employee" << endl;
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].setData();
    }
    cout << "Id Name Department Salary" << endl;

    for (int i = 0; i < n; i++)
    {
        e[i].getData();
    }
}

// output
//  Enter the number of employee
//  3
//  Enter Employee id :
//  1
//  Enter Employee name :
//  GAnpat
//  Enter Employee department :
//  manager
//  Enter Employee salary :
//  1000000
//  Enter Employee id :
//  2
//  Enter Employee name :
//  Jogi
//  Enter Employee department :
//  media
//  Enter Employee salary :
//  50000
//  Enter Employee id :
//  3
//  Enter Employee name :
//  Mukesh
//  Enter Employee department :
//  marketing
//  Enter Employee salary :
//  70000
//  Id Name Department Salary
//  Employee id : 1
//  Employee name : GAnpat
//  Employee department : manager
//  Employee salary : 1000000

// Employee id : 2
// Employee name : Jogi
// Employee department : media
// Employee salary : 50000

// Employee id : 3
// Employee name : Mukesh
// Employee department : marketing
// Employee salary : 70000