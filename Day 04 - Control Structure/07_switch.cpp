#include <iostream>
using namespace std;

int main()
{
    cout << "---Learning switch statement---" << endl;
    int number = 7;

    switch (number)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    case 7:
        cout << "Seven" << endl;
        break;
    case 8:
        cout << "Eight" << endl;
        break;
    case 9:
        cout << "Nine" << endl;
        break;
    case 10:
        cout << "Ten" << endl;
        break;

    default:
        cout << "This is default statement" << endl;
        break;
    }

    cout << " " << endl;

    int number2 = 20;

    switch (number2)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    case 7:
        cout << "Seven" << endl;
        break;
    case 8:
        cout << "Eight" << endl;
        break;
    case 9:
        cout << "Nine" << endl;
        break;
    case 10:
        cout << "Ten" << endl;
        break;

    default:
        cout << "This is default statement" << endl;
        break;
    }

    return 0;

    /*  Output
    ---Learning switch statement---
    Seven

    This is default statement
    */
}