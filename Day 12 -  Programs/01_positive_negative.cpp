#include <iostream>
using namespace std;

int main()
{
    cout << "---Positive or Negative---" << endl;
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    if (number > 0)
        cout << "Number is positive " << endl;
    else if (number < 0)
        cout << "Number is Negative " << endl;
    else
        cout << "Number is non positive and non negative value or zero" << endl;
    return 0;

    /*Output
    ---Positive or Negative---
    
    Enter the number
    5
    Number is positive

    Enter the number
    -5
    Number is Negative

    Enter the number
    g
    Number is non positive and non negative value or zero

    */
}