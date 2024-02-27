// Q1. A cashier has currency of denominations 1, 5 and 10. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.

#include <iostream>
using namespace std;

int main()
{
    int amount, tenCount = 0, fiveCount = 0, oneCount = 0;
    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;
    while (amount >= 10)
    {
        tenCount++;
        amount -= 10;
    }
    while (amount >= 5)
    {
        fiveCount++;
        amount -= 5;
    }
    while (amount >= 1)
    {
        oneCount++;
        amount -= 1;
    }

    cout << "10 Currency: " << tenCount << endl;
    cout << "5 Currency: " << fiveCount << endl;
    cout << "1 Currency: " << oneCount << endl;

    return 0;
}

/*output
Enter the amount to be withdrawn: 37
10 Currency: 3
5 Currency: 1
1 Currency: 2
*/