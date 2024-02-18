#include <iostream>
using namespace std;

int main()
{
    cout << "---NUMBER TRIANGLE----" << endl;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
    return 0;

    /*  Output
    ---NUMBER TRIANGLE----
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */
}