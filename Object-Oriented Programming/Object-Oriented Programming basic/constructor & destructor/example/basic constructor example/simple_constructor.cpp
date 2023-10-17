#include<iostream>
using namespace std;
/*
    A constructor is a special method that is automatically called when an object of a class is created.
    To create a constructor, use the same name as the class, followed by parentheses (): and it does not
    have any return value.
*/
class MyClass      // The class
{
public:            // Access specifier
    MyClass()      // Constructor
    {
        cout<<"\nConstructor is called";
    }
};

int main()
{
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)

    //output:
    //   Constructor is called
}
