#include<iostream>
using namespace std;

class constructor
{
public:
    float area;

    // Constructor with no parameters
    constructor()
    {
        area = 0; //Giving value 0 to variable area
    }

    // Constructor with two parameters a and b
    constructor(int a, int b)
    {
        area = a * b;
    }

    void display() //member function of the class
    {
        cout<< "Area: "<<area<< endl;
    }
};

int main()
{
    // Constructor Overloading with two different constructors of class name
    constructor obj;
    constructor obj2(20, 10);

    obj.display();
    obj2.display();


    //output:
    //    Area: 0
    //    Area: 200
}
