#include <iostream>
using namespace std;

template <class T>
inline T add(T a, T b) { return a + b; }

int main()
{
    cout << "Calling with int datatype: " << add(5, 10) << endl;
    cout << "Calling with float datatype: " << add(5.5, 10.9) << endl;
    return 0;
}

// output
// Calling with int datatype: 15
// Calling with float datatype: 16.4