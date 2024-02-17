#include <iostream>
using namespace std;

int main()
{
    cout << "---INVERTED LEFT HALF PYRAMID----" << endl;
    int i, j, k;
    for (i = 5; i > 0; i--)
    {
        for (j = 5; j > 0; j--)
        {
            if (j > i)
                cout << "   ";
            else
                cout << " * ";
        }

        cout << " " << endl;
    }
    return 0;

    /*  Output
    ----INVERTED LEFT HALF PYRAMID----

 *  *  *  *  *
    *  *  *  *
       *  *  *
          *  *
             *

    */
}