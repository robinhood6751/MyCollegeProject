#include <iostream>

using namespace std;

class MyClass
{
private:
    int value;

public:

    // Zero argument constructors 
    MyClass()
    {
        value = 0;
        cout << "Zero-argument constructor called ." << endl;
    }

    // Parameterized constructor

    MyClass(int val)
    {
        value = val;
        cout << "Parameterized constructor called with value " << val << "." << endl;
    }
    void display(){
        cout << "Value: " << value << endl;
    }
};
int main (){

    // using the zero argument constructor 
    MyClass obj1;
    obj1.display();

    //Using the parameterized constructor
    MyClass obj2(42);
    obj2.display();

    return 0;
}