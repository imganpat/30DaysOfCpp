#include <iostream>
using namespace std;

int main()
{
    cout << "---FULL NUMBER INCREASING TRIANGLE----" << endl;
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << " " << i;
        }
        cout << " " << endl;
    }

    return 0;

    /*  Output
    ---FULL NUMBER INCREASING TRIANGLE----
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
    */
}