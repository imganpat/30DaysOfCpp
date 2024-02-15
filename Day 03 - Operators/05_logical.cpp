#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning Lgical operations---" << endl;
    cout << " " << endl;

    cout << "1 = true and 0 = false" << endl;
    cout << " " << endl;

    /* logical and(&&)
    both conditions should be true*/
    cout << "(5 < 10) && (5 == 5) : " << ((5 < 10) && (5 == 5)) << endl; // true(1)
    cout << "(5 < 4) && (5 == 5) : " << ((5 < 4) && (5 == 5)) << endl;   // false(0)

    cout << " " << endl;

    /* Logical or (||)
    either one conditions should be true */
    cout << "(5 < 10) || (5 == 5) : " << ((5 < 10) || (5 == 5)) << endl; // true(1)
    cout << "(5 < 4) || (5 == 5) : " << ((5 < 4) || (5 == 5)) << endl;   // true(1)

    cout << " " << endl;

    /* Logical not(!)
    if true then it will return false and vise-versa */
    cout << "!(5 == 5) : " << !(5 == 5) << endl;   // false(0)
    cout << "!(5 == 10) : " << !(5 == 10) << endl; // true(1)

    return 0;



    // Output
    /* ---Learning Lgical operations---

    1 = true and 0 = false

    (5 < 10) && (5 == 5) : 1
    (5 < 4) && (5 == 5) : 0

    (5 < 10) || (5 == 5) : 1
    (5 < 4) || (5 == 5) : 1

    !(5 == 5) : 0
    !(5 == 10) : 1
    
    */
}