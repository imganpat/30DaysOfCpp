#include <iostream>
using namespace std;

int main()
{
    cout << "---Solid Square----" << endl;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << " * ";
        }
        cout << " " << endl;
    }
    return 0;


    /*  Output
    ---Solid Square----
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    */
}