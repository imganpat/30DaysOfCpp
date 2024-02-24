#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "---Learning Inline function---" << endl;
    int n1, n2;
    cout << "Enter two numbers " << endl;
    cin >> n1 >> n2;
    cout << "Sum " << sum(n1, n2) << endl;

    return 0;
}

/*Output
---Learning Inline function---
Enter two numbers
5
10
Sum 15
*/