#include <iostream>
using namespace std;

class Personnel
{
protected:
    string name, address, email_id, birth_date;
};

class Academic
{
protected:
    float marks_in_tenth, marks_in_twelth;
    string class_obtained;
};

class Bio_data : public Personnel, public Academic
{
public:
    void getData();
    void display();
};

void Bio_data ::getData()
{
    cout << "Enter name " << endl;
    cin >> name;
    cout << "Enter address " << endl;
    cin >> address;
    cout << "Enter email-id " << endl;
    cin >> email_id;
    cout << "Enter birth date " << endl;
    cin >> birth_date;
    cout << "Enter 10th marka " << endl;
    cin >> marks_in_tenth;
    cout << "Enter 12th marka " << endl;
    cin >> marks_in_twelth;
    cout << "Enter class obtained " << endl;
    cin >> class_obtained;
}

void Bio_data ::display()
{
    cout << "Name: " << name << endl;
    cout << "Address " << address << endl;
    cout << "Email id: " << email_id << endl;
    cout << "Bith date: " << birth_date << endl;
    cout << "10th marks: " << marks_in_tenth << endl;
    cout << "12th marks: " << marks_in_twelth << endl;
    cout << "Optained class: " << class_obtained << endl;
}

int main()
{
    Bio_data s1;
    s1.getData();
    cout << "----------Bio Data---------" << endl;
    s1.display();
    cout << "---------------------------" << endl;
    return 0;
}

// output
// Enter name
// Ganpat
// Enter address
// Pune
// Enter email-id
// ganpat123@gmail.com
// Enter birth date
// 30/02/2002
// Enter 10th marka
// 80
// Enter 12th marka
// 77
// Enter class obtained
// A
// ----------Bio Data---------
// Name: Ganpat
// Address Pune
// Email id: ganpat123@gmail.com
// Bith date: 30/02/2002
// 10th marks: 80
// 12th marks: 77
// Optained class: A
// ---------------------------