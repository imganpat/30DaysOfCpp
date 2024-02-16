#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning break stetement---" << endl;
    int number = 1;
    while (true)
    {
        cout << "Number : " << number << endl;
        number++;
        if (number == 7)
        {
            // stop the loop when number becomes 7
            cout << "Breaking from loop..." << endl;
            break;
        }
    }
    cout << "Final value of number : " << number << ". Thala for a reason... " << endl;

    return 0;

    /*  Output
    ---Learning break stetement---
    Number : 1
    Number : 2
    Number : 3
    Number : 4
    Number : 5
    Number : 6
    Breaking from loop...
    Final value of number : 7. Thala for a reason...
    */
}