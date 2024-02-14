#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int unit = 9;
    int tens = 90;
    int hundereds = 990;
    int thousands = 9090;

    // with setw()
    cout << "Using setw() function: " << setw(10) << unit << endl;
    cout << "Using setw() function: " << setw(10) << tens << endl;
    cout << "Using setw() function: " << setw(10) << hundereds << endl;
    cout << "Using setw() function: " << setw(10) << thousands << endl;

    // with setfill()
    cout << "Using setw() function: " << setw(10) << setfill('*') << unit << endl;
    cout << "Using setw() function: " << setw(10) << setfill('*') << tens << endl;
    cout << "Using setw() function: " << setw(10) << setfill('*') << hundereds << endl;
    cout << "Using setw() function: " << setw(10) << setfill('*') << thousands << endl;

    // with set setprecision()
    float pie = 3.141592;
    cout << "Using setw() function: " << setw(10) << setprecision(3) << pie << endl;
    return 0;

    /*Output
    Using setw() function:          9
    Using setw() function:         90
    Using setw() function:        990
    Using setw() function:       9090
    Using setw() function: *********9
    Using setw() function: ********90
    Using setw() function: *******990
    Using setw() function: ******9090
    Using setw() function: ******3.14
    */
}