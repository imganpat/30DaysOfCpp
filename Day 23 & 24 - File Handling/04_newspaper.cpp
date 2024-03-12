#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

class Newspaper
{
protected:
    string name, publisher;
    int price;

public:
    void getData()
    {
        // getline was behaving abnormally so found this solution
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter the name of newspaper \n -->";
        getline(cin, name);
        cout << "Enter the publisher of newspaper \n -->";
        getline(cin, publisher);
        cout << "Enter the price of newspaper \n -->";
        cin >> price;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void displayData()
    {
        cout << "\nName: " << name << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
    }

    // function to write into a file
    void insertIntoFile(ofstream &file)
    {
        file << "\nName: " << name << endl;
        file << "Publisher: " << publisher << endl;
        file << "Price: " << price << endl;
    }
};

int main()
{
    int n, i;
    cout << "Enter the value for n \n -->";
    cin >> n;

    Newspaper newspapers[n];
    for (i = 0; i < n; i++)
        newspapers[i].getData();

    ofstream file;
    file.open("04_newspaper.txt");

    // inserting the data into the file
    for (i = 0; i < n; i++)
        newspapers[i].insertIntoFile(file);

    for (i = 0; i < n; i++)
        newspapers[i].displayData();

    return 0;
}

// output
// Enter the value for n
//  -->3
// Enter the name of newspaper
//  -->times of India
// Enter the publisher of newspaper
//  -->Agarwal groups
// Enter the price of newspaper
//  -->5

// Enter the name of newspaper
//  -->Lokmat
// Enter the publisher of newspaper
//  -->Lokmat coperation
// Enter the price of newspaper
//  -->4

// Enter the name of newspaper
//  -->Pune Times
// Enter the publisher of newspaper
//  -->Pawar ltd
// Enter the price of newspaper
//  -->4

// Name: times of India
// Publisher: Agarwal groups
// Price: 5

// Name: Lokmat
// Publisher: Lokmat coperation
// Price: 4

// Name: Pune Times
// Publisher: Pawar ltd
// Price: 4