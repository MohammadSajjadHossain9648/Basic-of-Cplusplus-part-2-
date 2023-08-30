#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double height;

public:
    // parameterized constructor
    Rectangle(double l, double h)
    {
        length = l;
        height = h;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create objects to call constructors
    Rectangle obj1(10,6);
    Rectangle obj2(13,8);


    cout<<"Area of Rectangle 1: "<<obj1.calculateArea();
    cout<<"\nArea of Rectangle 2: "<<obj2.calculateArea();


    //output:
    //    Area of Rectangle 1: 60
    //    Area of Rectangle 2: 104
}
