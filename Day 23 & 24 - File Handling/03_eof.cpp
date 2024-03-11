#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;
    ofstream obj;

    obj.open("03_eof.txt");
    for (int i = 0; i < 5; i++)
    {
        str = "This is a line\n";
        obj << str;
    }

    obj.close();

    ifstream obj2;
    obj2.open("03_eof.txt");
    string temp;

    while (obj2.eof() == 0)
    {
        getline(obj2, temp);
        cout << temp << endl;
    }

    obj2.close();

    return 0;
}

// output
//  This is a line
//  This is a line
//  This is a line
//  This is a line
//  This is a line