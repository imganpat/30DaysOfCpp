#include <iostream>
using namespace std;

template <typename data_type>
class Calculate
{
    data_type number;

public:
    Calculate(data_type n) { this->number = n; }

    void display()
    {
        cout << "Given number: " << this->number << endl;
    }

    data_type square() { return (this->number * this->number); }
};

int main()
{
    Calculate<float> obj(5.5);
    obj.display();
    cout << "Square: " << obj.square();
    return 0;
}

// output
// Given number: 5.5
// Square: 30.25