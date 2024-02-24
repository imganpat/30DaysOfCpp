#include <iostream>
using namespace std;

void function(); // function prototype

int main()
{
    cout << "---Learning Functions " << endl;
    function(); // calling function

    return 0;
}

void function() // function definition
{
    cout << "Hello, I am a function" << endl;
}

/*Output
---Learning Functions
Hello, I am a function
*/