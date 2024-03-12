#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

inline float calculatePercentage(float m1, float m2, float m3)
{
    return ((m1 + m2 + m3) / 300) * 100;
}

void insertPercentage(ofstream &file, string name, float per)
{
    file << "\nName: " << name << endl;
    file << "Percentage : " << setprecision(4) << per << endl;
}

int main()
{
    string name;
    float marks1, marks2, marks3, percentage;
    ifstream infile;
    ofstream outfile;
    infile.open("05_student_read.txt");
    outfile.open("05_student_percentage.txt", ios::app);
    while (infile.eof() == false)
    {
        infile >> name;
        infile >> marks1;
        infile >> marks2;
        infile >> marks3;

        percentage = calculatePercentage(marks1, marks2, marks3);

        insertPercentage(outfile, name, percentage);

        cout << name << endl;
        cout << marks1 << endl;
        cout << marks2 << endl;
        cout << marks3 << endl;

        // cout << setprecision(4) << percentage << endl;
    }

    return 0;
}

// output
// Ganpat
// 90
// 95
// 99
// Kabir
// 70
// 65
// 80
// Mukesh
// 80
// 75
// 88
// Rajesh
// 55
// 78
// 84