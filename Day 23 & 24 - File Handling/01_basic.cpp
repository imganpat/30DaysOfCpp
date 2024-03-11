#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // openinga and writing to a file
    ofstream obj;
    obj.open("basic.txt");
    string temp = "This is the first file program in c++";
    obj << temp;
    obj.close();

    // openinga and reading from a file
    ifstream obj2;
    obj2.open("basic.txt");
    string temp2;
    getline(obj2, temp);
    cout << temp;
    obj.close();

    return 0;
}