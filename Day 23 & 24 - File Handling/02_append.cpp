#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream obj("02_append.txt");
    string temp = "This is first line. \n";
    obj << temp;
    obj.close();

    // appending
    ofstream obj3("02_append.txt", ios::app);
    temp = "This is second line";
    obj3 << temp;
    obj3.close();

    ifstream obj2("02_append.txt");
    getline(obj2, temp);
    cout << temp;
    cout << endl;
    getline(obj2, temp);
    cout << temp;
    obj.close();

    return 0;
}

// output
// This is first line.
// This is second line