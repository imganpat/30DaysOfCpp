#include <iostream>
using namespace std;

class Product
{
    int product_id, product_price;
    string product_name;

public:
    void initProduct()
    {
        cout << "Enter product id ";
        cin >> product_id;

        cout << "Enter product name ";
        cin >> product_name;

        cout << "Enter product price ";
        cin >> product_price;
    }

    void displayProduct()
    {
        cout << "Product id: " << product_id << endl;
        cout << "Product name: " << product_name << endl;
        cout << "Product price: " << product_price << endl;
    }

    friend int totalPrice(Product, Product); // its not the class method .i.e it can't be called with the class object.
};

int totalPrice(Product a, Product b)
{
    return a.product_price + b.product_price;
}

int main()
{
    Product p1, p2, cart;
    p1.initProduct();
    p2.initProduct();

    p1.displayProduct();
    p2.displayProduct();

    cout << "Total price: " << totalPrice(p1, p2) << endl;

    return 0;
}

// output
// Enter product id 1
// Enter product name Phone
// Enter product price 20000
// Enter product id 2
// Enter product name Earbuds
// Enter product price 2000
// Product id: 1
// Product name: Phone
// Product price: 20000
// Product id: 2
// Product name: Earbuds
// Product price: 2000
// Total price: 22000