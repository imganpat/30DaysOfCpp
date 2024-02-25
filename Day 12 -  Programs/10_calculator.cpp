// Q10. write a program to perform arithmetic operations using switch case.

#include <iostream>
using namespace std;

inline int add(int n1, int n2)
{
    return n1 + n2;
}

inline int sub(int n1, int n2)
{
    return n1 - n2;
}

inline int mulipliy(int n1, int n2)
{
    return n1 * n2;
}

inline int divide(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    int n1, n2;
    char op;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The sum of " << n1 << " and " << n2 << " is " << add(n1, n2) << endl;
        break;
    case '-':
        cout << "The difference of " << n1 << " and " << n2 << " is " << sub(n1, n2) << endl;
        break;
    case '*':
        cout << "The product of " << n1 << " and " << n2 << " is " << mulipliy(n1, n2) << endl;
        break;
    case '/':
        cout << "The division of " << n1 << " and " << n2 << " is " << divide(n1, n2) << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}

/*Output
Enter the first number: 5
Enter the second number: 5
Enter the operator: +
The sum of 5 and 5 is 10

Enter the first number: 5
Enter the second number: 5
Enter the operator: -
The difference of 5 and 5 is 0

Enter the first number: 5
Enter the second number: 5
Enter the operator: *
The product of 5 and 5 is 25

Enter the first number: 5
Enter the second number: 5
Enter the operator: /
The division of 5 and 5 is 1
*/