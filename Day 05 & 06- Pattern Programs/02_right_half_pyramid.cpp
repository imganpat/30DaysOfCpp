#include <iostream>
using namespace std;

int main()
{
    cout << "---RIGHT HALF PYRAMID----" << endl;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << " " << endl;
    }
    return 0;

    /*  Output
    ---RIGHT HALF PYRAMID----
    *
    *  *
    *  *  *
    *  *  *  *
    *  *  *  *  *
    */
}