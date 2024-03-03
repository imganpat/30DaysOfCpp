#include <iostream>
using namespace std;

class Product
{
    string name;
    int price;

public:
    void setDetails()
    {
        cout << "Enter product name and price \n";
        cin >> name >> price;
    }

    void getDetails()
    {
        cout << "Produnt Name: " << name << endl;
        cout << "Produnt Price: " << price << endl;
        cout << endl;
    }

    // return the price of the product to find the max price
    inline int getPrice() { return price; }
};

int maxPriceIndex(Product p[])
{

    int i, max = 0;
    for (i = 1; i < 5; i++)
    {
        if (p[max].getPrice() < p[i].getPrice())
            max = i;
    }
    return max;
}

int main()
{
    Product p[5];
    for (int i = 0; i < 5; i++)
        p[i].setDetails();

    for (int i = 0; i < 5; i++)
        p[i].getDetails();

    cout << "Product having max price \n";

    p[maxPriceIndex(p)].getDetails();

    return 0;
}

// output

// Enter product name and price
// Phone 20000
// Enter product name and price
// Earphone 2000
// Enter product name and price
// Laptop 40000
// Enter product name and price
// Watch 2000
// Enter product name and price
// Headphone 2000
// Produnt Name: Phone
// Produnt Price: 20000

// Produnt Name: Earphone
// Produnt Price: 2000

// Produnt Name: Laptop
// Produnt Price: 40000

// Produnt Name: Watch
// Produnt Price: 2000

// Produnt Name: Headphone
// Produnt Price: 2000

// Product having max price
// Produnt Name: Laptop
// Produnt Price: 40000