#include <iostream>
using namespace std;

int main()
{
    cout << "---HOLLOW SQUARE----" << endl;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << " " << endl;
    }
    return 0;

    /*  Output
    ---HOLLOW SQUARE----
    *  *  *  *  *
    *           *
    *           *
    *           *
    *  *  *  *  *
    */
}