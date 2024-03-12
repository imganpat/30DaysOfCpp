#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, number[10];
    ofstream positive_file;
    ofstream negative_file;

    cout << "Enter 10 numbers " << endl;
    for (i = 0; i < 10; i++)
        cin >> number[i];

    positive_file.open("06_positive.txt");
    negative_file.open("06_negative.txt");

    for (i = 0; i < 10; i++)
    {
        if (number[i] < 0)
            negative_file << number[i] << ", ";
        else
            positive_file << number[i] << ", ";
    }
    return 0;
}

// output
// Enter 10 numbers
// 7
// -3
// 0
// 6
// 2
// 8
// -9
// -3
// 1
// -7