#include <iostream>
using namespace std;

class Product
{
protected:
    int product_id, product_price;
    string product_name;
};

class Discount : public Product
{
    float discount_percentage;

public:
    void acceptDetails()
    {
        cout << "Enter product id ";
        cin >> product_id;

        cout << "Enter product name ";
        cin >> product_name;

        cout << "Enter product price ";
        cin >> product_price;

        cout << "Enter discount percentage ";
        cin >> discount_percentage;
    }

    void displayDetails()
    {
        cout << "Product id: " << product_id << endl;
        cout << "Product name: " << product_name << endl;
        cout << "Product price: " << product_price << endl;
        cout << "Discont percentage: " << discount_percentage << endl;
    }

    inline int getPrice() { return product_price; }

    inline float getDiscoundPercentage() { return discount_percentage; }
};

int totalPrice(Discount obj[], int n)
{
    int total_price = 0;
    for (int i = 0; i < n; i++)
        total_price += obj[i].getPrice();

    return total_price;
}

float totalDiscount(Discount obj[], int total_price, int n)
{
    float price = 0, discount = 0, total_discounted_price = 0, total_discount = 0;
    for (int i = 0; i < n; i++)
    {
        price = obj[i].getPrice();
        discount = obj[i].getDiscoundPercentage();
        price -= (price * (discount / 100));
        total_discounted_price += price;
    }
    return total_discounted_price;
}

int main()
{
    int n;
    cout << "Enter the number of product" << endl;
    cin >> n;
    Discount p[n];
    for (int i = 0; i < n; i++)
        p[i].acceptDetails();

    cout << "\n---------Product Details---------\n";
    for (int i = 0; i < n; i++)
        p[i].displayDetails();
    cout << "---------------------------------\n";

    int total_price = totalPrice(p, n);
    cout << "Total Price : "
         << "Rs " << total_price << endl;

    float discounted_price = totalDiscount(p, total_price, n);

    cout << "Total price after Discount "
         << "Rs " << discounted_price << endl;

    cout << "You saved: "
         << "Rs " << total_price - discounted_price << endl;

    return 0;
}

// output
// Enter the number of product
// 3
// Enter product id 1
// Enter product name Laptop
// Enter product price 40000
// Enter discount percentage 10
// Enter product id 2
// Enter product name Phone
// Enter product price 2000
// Enter discount percentage 5
// Enter product id 3
// Enter product name earphone
// Enter product price 1000
// Enter discount percentage 0.5
//
//---------Product Details---------
// Product id: 1
// Product name: Laptop
// Product price: 40000
// Discont percentage: 10
// Product id: 2
// Product name: Phone
// Product price: 2000
// Discont percentage: 5
// Product id: 3
// Product name: earphone
// Product price: 1000
// Discont percentage: 0.5
//---------------------------------
// Total Price : Rs 43000
// Total price after Discount Rs 38895
// You saved: Rs 4105