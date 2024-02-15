#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Comparision operators---" << endl;
    cout << " " << endl;

    cout << "1 = true and 0 = false" << endl;
    cout << " " << endl;

    cout << "(5 == 5) : " << (5 == 5) << endl;   // true(1)
    cout << "(5 == 10) : " << (5 == 10) << endl; // false(0)

    cout << " " << endl;

    cout << "(5 != 5) : " << (5 != 5) << endl;   // false(0)
    cout << "(5 != 10) : " << (5 != 10) << endl; // true(1)

    cout << " " << endl;

    cout << "(3 < 5) : " << (3 < 5) << endl;   // true(1)
    cout << "(5 < 5) : " << (5 < 5) << endl;   // false(0)
    cout << "(10 < 5) : " << (10 < 5) << endl; // false(0)

    cout << " " << endl;

    cout << "(5 > 10) : " << (5 > 10) << endl; // false(0)
    cout << "(5 > 5) : " << (5 > 5) << endl;   // false(0)
    cout << "(10 > 5) : " << (10 > 5) << endl; // true(1)

    cout << " " << endl;

    cout << "(5 <= 10) : " << (5 <= 10) << endl; // true(1)
    cout << "(5 < 5) : " << (5 <= 5) << endl;    // true(1)
    cout << "(10 <= 5) : " << (10 <= 5) << endl; // false(0)

    cout << " " << endl;

    cout << "(5 >= 10) : " << (5 >= 10) << endl; // false(0)
    cout << "(5 < 5) : " << (5 >= 5) << endl;    // true(1)
    cout << "(10 >= 5) : " << (10 >= 5) << endl; // true(1)

    return 0;


    // Output
    /*---Learning Comparision operators---

    1 = true and 0 = false

    (5 == 5) : 1
    (5 == 10) : 0

    (5 != 5) : 0
    (5 != 10) : 1

    (3 < 5) : 1
    (5 < 5) : 0
    (10 < 5) : 0

    (5 > 10) : 0
    (5 > 5) : 0
    (10 > 5) : 1

    (5 <= 10) : 1
    (5 < 5) : 1
    (10 <= 5) : 0

    (5 >= 10) : 0
    (5 < 5) : 1
    (10 >= 5) : 1
    */
}