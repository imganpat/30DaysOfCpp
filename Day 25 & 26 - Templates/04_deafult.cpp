#include <iostream>
using namespace std;

template <class T = int, class T2 = int>
class Class
{
    T member1;
    T2 member2;

public:
    Class(T a, T2 b)
    {
        this->member1 = a;
        this->member2 = b;
    }
    void display()
    {
        cout << "Member 1: " << this->member1 << endl;
        cout << "Member 2: " << this->member2 << endl;
    }
};

int main()
{
    Class<> object(5, 10);
    Class<char, int> object2('A', 'G');

    cout << "-----Int-----" << endl;
    object.display();

    cout << "-----Char-----" << endl;
    object2.display();

    return 0;
}

// output
// -----Int-----
// Member 1: 5
// Member 2: 10
// -----Char-----
// Member 1: A
// Member 2: 71