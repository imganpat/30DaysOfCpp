#include <iostream>
using namespace std;

int main()
{
    cout << "---Rhombus----" << endl;
    int i, j, k;
    for (i = 5; i > 0; i--)
    {
        for (j = 5; j > i; j--)
        {
            cout << " ";
        }

        for (k = 0; k < 5; k++)
        {
            cout << " * ";
        }

        cout << " " << endl;
    }
    return 0;

    /*  Output

*  *  *  *  *
  *  *  *  *  *
   *  *  *  *  *
    *  *  *  *  *
     *  *  *  *  *

    */
}