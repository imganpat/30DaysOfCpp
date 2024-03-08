#include <iostream>
#include <iomanip>
using namespace std;

class Conversion
{
public:
    virtual void setData()
    {
        cout << "No unit to set" << endl;
    }
    virtual void convert()
    {
        cout << "No unit to calculatae" << endl;
    }

    virtual void displayData()
    {
        cout << "No unit to display" << endl;
    }

    virtual ~Conversion() {}
};

class Weight : public Conversion
{
protected:
    float gram;
    float kilogram;

public:
    void setData()
    {
        cout << "Enter grams \n --> ";
        cin >> gram;
    }

    void convert() { kilogram = gram / 1000; }

    void displayData()
    {
        cout << "Grams: " << gram << endl;
        cout << "Kilograms: " << kilogram << "\n"
             << endl;
    }
};

class Volume : public Conversion
{
protected:
    float milileter;
    float liter;

public:
    void setData()
    {
        cout << "Enter milileters \n --> ";
        cin >> milileter;
    }

    void convert() { liter = milileter / 1000; }

    void displayData()
    {
        cout << "Mililiters: " << milileter << endl;
        cout << "Liters: " << liter << "\n"
             << endl;
    }
};

class Currency : public Conversion
{
protected:
    float rupee;
    float dollar;

public:
    void setData()
    {
        cout << "Enter rupees \n --> ";
        cin >> rupee;
    }

    void convert() { dollar = rupee / 80.30; }

    void displayData()
    {
        cout << "Rupees: " << rupee << endl;
        cout << "Dollars: " << setprecision(3) << dollar << "\n"
             << endl;
    }
};

int main()
{
    Weight weight;
    Volume volume;
    Currency currency;

    Conversion *conversion_pointer;

    conversion_pointer = &weight;
    conversion_pointer->setData();
    conversion_pointer->convert();
    conversion_pointer->displayData();

    conversion_pointer = &volume;
    conversion_pointer->setData();
    conversion_pointer->convert();
    conversion_pointer->displayData();

    conversion_pointer = &currency;
    conversion_pointer->setData();
    conversion_pointer->convert();
    conversion_pointer->displayData();

    return 0;
}

// output
// Enter grams
//  --> 1900
// Grams: 1900
// Kilograms: 1.9

// Enter milileters
//  --> 2500
// Mililiters: 2500
// Liters: 2.5

// Enter rupees
//  --> 90
// Rupees: 90
// Dollars: 1.12