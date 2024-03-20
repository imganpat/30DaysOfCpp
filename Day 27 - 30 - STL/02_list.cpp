#include <iostream>
#include <list>
using namespace std;

void displayList(list<int> &my_list) // pass by reference
{
    for (auto i = my_list.begin(); i != my_list.end(); i++)
        // auto keyword is used to automatically detect the data type of the variable
        cout << *i << " ";
    cout << endl;
}

int main()
{
    list<int> my_list; // list of integers
    int i;

    for (i = 1; i <= 5; i++)
        my_list.push_back(i);

    displayList(my_list);

    my_list.push_front(0);

    displayList(my_list);

    cout << "Size of list: " << my_list.size() << endl;

    my_list.reverse();
    cout << "Reversed list: ";
    displayList(my_list);

    return 0;
}

// output
// 1 2 3 4 5
// 0 1 2 3 4 5
// Size of list: 6
// Reversed list: 5 4 3 2 1 0