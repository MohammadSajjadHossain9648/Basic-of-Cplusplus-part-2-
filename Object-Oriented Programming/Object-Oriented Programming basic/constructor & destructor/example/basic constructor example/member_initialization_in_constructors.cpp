#include <iostream>
using namespace std;
/*
    Member initialization in constructors:
    When a constructor is used to initialize other members, these other members can be initialized directly,
    without resorting to statements in its body. This is done by inserting, before the constructor's body, a
    colon (:) and a list of initializations for class members. For example, consider a class with the following
    declaration:

        class Rectangle {
            int width,height;
          public:
            Rectangle(int,int);
            int area() {return width*height;}
        };

    The constructor for this class could be defined, as usual, as:
        Rectangle::Rectangle (int x, int y) { width=x; height=y; }

    But it could also be defined using member initialization as:
        Rectangle::Rectangle (int x, int y) : width(x) { height=y; }

    Or even:
        Rectangle::Rectangle (int x, int y) : width(x), height(y) { }

    Note how in this last case, the constructor does nothing else than initialize its members, hence it has an
    empty function body.
*/
//parent class
class Circle
{
    double radius;
public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
        return radius*radius*3.14159265;
    }
};

//child class
class Cylinder
{

public:
    Circle base;
    double height;
    Cylinder(double r, double h){
        Circle::radius = r;
        height = h;
    }
    //Cylinder(double r, double h) : base (r), height(h) {}

    double volume()
    {
        return base.area() * height;
    }
};

int main ()
{
    Cylinder foo(10,20);

    cout<<"foo's volume: "<<foo.volume()<<'\n';


    //output:
    //    foo's volume: 6283.19

    /*
    In this example, class Cylinder has a member object whose type is another class (base's type is Circle).
    Because objects of class Circle can only be constructed with a parameter, Cylinder's constructor needs to
    call base's constructor, and the only way to do this is in the member initializer list.
    */
}
