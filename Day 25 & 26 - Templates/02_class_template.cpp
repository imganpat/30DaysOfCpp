#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
class TemplateClass
{
    T template_variable;

public:
    TemplateClass(T value) { template_variable = value; }
    void display()
    {
        cout << "Template variable: " << template_variable << endl;
    }
    // void typeOF()
    // {
    //     cout << "Type: " << typeid(T).name() << endl;
    // }
    // not working for string
};

int main()
{

    TemplateClass<int> int_object(5);
    int_object.display();

    TemplateClass<float> float_object(5.5);
    float_object.display();

    TemplateClass<string> string_object("Ganpat");
    string_object.display();

    return 0;
}

// output
// Template variable: 5
// Template variable: 5.5
// Template variable: Ganpat