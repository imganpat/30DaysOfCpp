#include <iostream>
using namespace std;

template <class T, class T2>
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
    Class<int, int> object(5, 10);
    Class<float, float> object2(5.5, 10.5);
    Class<char, char> object3('A', 'G');

    cout << "-----Int-----" << endl;
    object.display();

    cout << "-----Float-----" << endl;
    object2.display();

    cout << "-----Char-----" << endl;
    object3.display();
    return 0;
}

// output
//  -----Int-----
//  Member 1: 5
//  Member 2: 10
//  -----Float-----
//  Member 1: 5.5
//  Member 2: 10.5
//  -----Char-----
//  Member 1: A
//  Member 2: G