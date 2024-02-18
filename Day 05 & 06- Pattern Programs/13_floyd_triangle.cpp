#include <iostream>
using namespace std;

int main()
{
    cout << "---FLOYD'S TRIANGLE----" << endl;
    int i, j, number = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << number++;
        }
        cout << endl;
    }
    return 0;

    /*  Output
    ---FLOYD'S TRIANGLE----
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
}