/*Q8. Write a program to perform the following operations on a rectangle:
1.Print area
2.Print volume
*/

#include <iostream>
using namespace std;

inline float area(float length, float breadth)
{
    return length * breadth;
}

inline float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}

int main()
{
    int choice;
    float length, breadth, height;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    cout << "Enter your choice: " << endl;
    cout << "1. Print area" << endl;
    cout << "2. Print volume" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Area of the rectangle: " << area(length, breadth) << endl;
        break;
    case 2:
        cout << "Volume of the rectangle: " << volume(length, breadth, height) << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}

/*
Enter the length of the rectangle: 4
Enter the breadth of the rectangle: 5
Enter the height of the rectangle: 6
Enter your choice:
1. Print area
2. Print volume
1
Area of the rectangle: 20


Enter the length of the rectangle: 4
Enter the breadth of the rectangle: 5
Enter the height of the rectangle: 6
Enter your choice:
1. Print area
2. Print volume
2
Volume of the rectangle: 120
*/