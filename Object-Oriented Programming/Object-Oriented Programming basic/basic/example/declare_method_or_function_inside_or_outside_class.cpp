#include<iostream>
using namespace std;

class Method
{
public: // Access specifier
    // Method/function defined inside the class
    void inside()
    {
        cout<<"\ni am inside class method.";
    }

    // Method/function declaration
    void outside();
};

// Method/function definition outside the class
void Method::outside()
{
    cout<<"\ni am outside class method.";
};

int main()
{
    Method m;
    m.inside();
    m.outside();

    //output:
    //
    //    i am inside class method.
    //    i am outside class method.
}
