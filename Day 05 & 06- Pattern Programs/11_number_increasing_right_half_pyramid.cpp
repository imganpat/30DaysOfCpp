#include <iostream>
using namespace std;

int main()
{
    cout << "---NUMBER INCREASING RIGHT HALF PYRAMID----" << endl;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;

    /*  Output
    ---NUMBER INCREASING RIGHT HALF PYRAMID----
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */
}