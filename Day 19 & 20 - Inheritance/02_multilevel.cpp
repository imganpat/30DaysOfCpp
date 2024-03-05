#include <iostream>
using namespace std;

class Customer
{
protected:
    string name;
    long long int phone_number;
};

class Depositor : public Customer
{
protected:
    int account_no;
    float balance;
};

class Borrower : public Depositor
{
protected:
    int loan_no;
    float loan_amount;

public:
    void setData();
    void displayData();
};

void Borrower ::setData()
{
    cout << "Enter name \n --> ";
    cin >> name;

    cout << "Enter phone number \n --> ";
    cin >> phone_number;

    cout << "Enter account number \n --> ";
    cin >> account_no;

    cout << "Enter balance \n --> ";
    cin >> balance;

    cout << "Enter loan number \n --> ";
    cin >> loan_no;

    cout << "Enter loan amount \n --> ";
    cin >> loan_amount;
}

void Borrower ::displayData()
{
    cout << "Name: " << name << endl;
    cout << "Phone no: " << phone_number << endl;
    cout << "Account no: " << account_no << endl;
    cout << "Balance: " << balance << endl;
    cout << "Loan no: " << loan_no << endl;
    cout << "Loan amount: " << loan_amount << endl
         << endl;
}

int main()
{
    int n;
    cout << "Enter the number of customer " << endl;
    cin >> n;
    Borrower borrower[n];
    for (int i = 0; i < n; i++)
        borrower[i].setData();

    cout << "----------Customer Details----------" << endl;
    for (int i = 0; i < n; i++)
        borrower[i].displayData();
    cout << "------------------------------------" << endl;

    return 0;
}

// output
// Enter the number of customer
// 3
// Enter name
//  --> Ganpat
// Enter phone number
//  --> 1234567890
// Enter account number
//  --> 100
// Enter balance
//  --> 90000
// Enter loan number
//  --> 1
// Enter loan amount
//  --> 100000
// Enter name
//  --> Ambani
// Enter phone number
//  --> 0987654321
// Enter account number
//  --> 102
// Enter balance
//  --> 9000
// Enter loan number
//  --> 3
// Enter loan amount
//  --> 20000
// Enter name
//  --> Mukesh
// Enter phone number
//  --> 1234509876
// Enter account number
//  --> 303
// Enter balance
//  --> 50000
// Enter loan number
//  --> 202
// Enter loan amount
//  --> 60000
// ----------Customer Details----------
// Name: Ganpat
// Phone no: 1234567890
// Account no: 100
// Balance: 90000
// Loan no: 1
// Loan amount: 100000

// Name: Ambani
// Phone no: 987654321
// Account no: 102
// Balance: 9000
// Loan no: 3
// Loan amount: 20000

// Name: Mukesh
// Phone no: 1234509876
// Account no: 303
// Balance: 50000
// Loan no: 202
// Loan amount: 60000

// ------------------------------------