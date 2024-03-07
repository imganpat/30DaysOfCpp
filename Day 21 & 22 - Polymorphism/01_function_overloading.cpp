#include <iostream>
using namespace std;

void area(int l, int b)
{
    cout << "Area of rectangle is " << (l * b) << endl;
}
void area(int s)
{
    cout << "Area of rectangle is " << (s * s) << endl;
}
void area(float r)
{
    cout << "Area of circle is " << (3.14 * r * r) << endl;
}

int main()
{
    int choice;
    cout << "Enter choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int length, breath;
        cout << "Enter length and breadth of rectangle " << endl;
        cin >> length >> breath;
        area(length, breath);
        break;
    case 2:
        int side;
        cout << "Enter size of square " << endl;
        cin >> side;
        area(side);
        break;
    case 3:
        float radius;
        cout << "Enter radius of circle " << endl;
        cin >> radius;
        area(radius);
        break;

    default:
        cout << "Choice should be 1, 2 or 3" << endl;
        break;
    }
    return 0;
}

// output

// Enter choice 1
// Enter length and breadth of rectangle
// 5
// 6
// Area of rectangle is 30

// Enter choice 2
// Enter size of square
// 5
// Area of rectangle is 25

// Enter choice 3
// Enter radius of circle
// 5.5
// Area of circle is 94.985