#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // parameterized constructor
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    // copy constructor with a Rectangle object as parameter copies data of the obj parameter
    Rectangle(Rectangle &obj)   //write pass by reference and never write pass by value -> Rectangle(Rectangle obj)
    {
        length = obj.length;
        width = obj.width;

        /*same as
        this->length = obj.length;
        this->width = obj.width;
        */
    }


    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    // create objects to call constructors
    Rectangle obj1(10,6);

    Rectangle obj2(obj1);   //copy the content using object and can write same as -> Rectangle obj2 = obj1;

    /*whats mean -> Rectangle obj2(obj1);
    obj2.length = obj1.length;
    obj2.width = obj1.width;
    */


    //print areas of rectangles
    cout<<"Area of Rectangle 1: "<<obj1.calculateArea();
    cout<<"\nArea of Rectangle 2: "<<obj2.calculateArea();


    //output:
    //    Area of Rectangle 1: 60
    //    Area of Rectangle 2: 60
}
