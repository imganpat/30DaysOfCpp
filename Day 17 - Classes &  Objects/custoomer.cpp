#include <iostream>
using namespace std;

// class declaration
class Customer
{
private: // access specifier private (cannot access the private members outside the class. It  can be done only with calss methoda .i.e functions)
    int id;
    string name;
    string addr;
    long long int contact_no;

public:
    void accept(int i, string n, string a, long long int c);
    void display();
};

// class methods definations
void Customer::accept(int i, string n, string a, long long int c)
{
    id = i;
    name = n;
    addr = a;
    contact_no = c;
}

void Customer ::display()
{
    cout << "Cutomer id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << addr << endl;
    cout << "Contact no: " << contact_no << endl;
}

int main()
{
    Customer obj; // created object of customer class
    // calling class methods trough objects
    obj.accept(01, "Ganpat", "Pune", 9876543210);
    obj.display();
    return 0;
}

// Output
//  Cutomer id: 1
//  Name: Ganpat
//  Address: Pune
//  Contact no: 9876543210