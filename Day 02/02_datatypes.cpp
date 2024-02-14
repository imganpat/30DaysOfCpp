#include <iostream>
using namespace std;

int main()
{
    int integer = 1;       // used to store numbers without point. size = 4 bytes
    char character = 'G';  // used to store  a single character. size = 1 bytes
    float decimal = 99.99; // used to store numbers with point. size = 4 bytes
    bool boolean = 1;      // used to store true(1) or false(0). size = 1 byte

    cout << "int variable: " << integer << endl;
    cout << "char variable: " << character << endl;
    cout << "float variable: " << decimal << endl;
    cout << "bool variable: " << boolean << endl;
    return 0;

// Output
/*
 int variable: 1
 char variable: G
 float variable: 99.99
 bool variable: 1 
*/
}