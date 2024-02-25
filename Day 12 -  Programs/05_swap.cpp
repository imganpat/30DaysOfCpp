// Q5. Write a program to swap two numbers.

#include <iostream>
using namespace std;

void swap_with_3rd_variable(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "Swapping with 3rd variable: " << endl;
    cout << " n1: " << n1 << "\n n2: " << n2 << endl;
}

void swap_without_3rd_variable(int n1, int n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "Swapping without 3rd variable: " << endl;
    cout << " n1: " << n1 << "\n n2: " << n2 << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping: " << endl;
    cout << " n1: " << n1 << "\n n2: " << n2 << endl;

    swap_with_3rd_variable(n1, n2);

    swap_without_3rd_variable(n1, n2);

    return 0;
}

/*Output
Enter two numbers: 5
10
Before swapping:
 n1: 5
 n2: 10
Swapping with 3rd variable:
 n1: 10
 n2: 5
Swapping without 3rd variable:
 n1: 10
 n2: 5
*/