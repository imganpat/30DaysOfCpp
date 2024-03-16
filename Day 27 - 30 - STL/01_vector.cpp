#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        // cout << v[i] << " ";
        cout << v.at(i) << " "; // same as v[i]
    cout << endl;
}

int main()
{
    int i;
    vector<int> vector_var;

    for (i = 1; i <= 5; i++)
        vector_var.push_back(i); // inserts elements at the end of the vector

    display(vector_var);

    vector_var.pop_back(); // removes the last element

    cout << "After pop: " << endl;

    display(vector_var);

    return 0;
}

// output
// 1 2 3 4 5
// After pop:
// 1 2 3 4