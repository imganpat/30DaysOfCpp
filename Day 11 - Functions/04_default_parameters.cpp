#include <iostream>
using namespace std;

int sum(int a = 0, int b = 0) // default parameters
{
    return a + b;
}

int main()
{
    cout << "---Learning Default Parameters---" << endl;
    int n1, n2;
    cout << "Enter two numbers " << endl;
    cin >> n1 >> n2;
    cout << "Calling function without arguments. Sum " << sum() << endl;
    cout << "Calling function with arguments. Sum " << sum(n1, n2) << endl; // arguments passes

    return 0;
}

/*Output
---Learning Default Parameters---
Enter two numbers
6
4
Calling function without arguments. Sum 0
Calling function with arguments. Sum 10
*/