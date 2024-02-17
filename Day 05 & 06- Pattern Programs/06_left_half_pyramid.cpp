#include <iostream>
using namespace std;

int main()
{
    cout << "---LEFT HALF PYRAMID----" << endl;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > 0; j--)
        {
            if (i >= j - 1)
                cout << " * ";
            else
                cout << "   ";
        }

        cout << " " << endl;
    }
    return 0;

    /*  Output
---LEFT HALF PYRAMID----

             *
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *

    */
}