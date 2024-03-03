#include <iostream>
using namespace std;

class Distance
{
public:
    float feet, inch;

public:
    void acceptDistance()
    {
        cout << "Enter feet ";
        cin >> feet;

        cout << "Enter inch ";
        cin >> inch;
    }

    void displayDistance()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inch: " << inch << endl;
    }

    Distance totalDistance(Distance, Distance);
};

Distance totalDistance(Distance a, Distance b)
{
    Distance res;
    res.feet = a.feet + b.feet;
    res.inch = a.inch + b.inch;
    return res;
}

int main()
{
    Distance d1, d2, d3;

    d1.acceptDistance();
    d2.acceptDistance();

    d1.displayDistance();
    d2.displayDistance();

    d3 = totalDistance(d1, d2);
    d3.displayDistance();

    return 0;
}

// output
// Enter feet 5
// Enter inch 3
// Enter feet 5
// Enter inch 3
// Feet: 5
// Inch: 3
// Feet: 5
// Inch: 3
// Feet: 10
// Inch: 6