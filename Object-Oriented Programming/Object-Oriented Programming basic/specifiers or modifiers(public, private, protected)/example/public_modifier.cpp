#include<iostream>
using namespace std;
/*
    Public: All the class members declared under the public specifier will be available to everyone. The data
    members and member functions declared as public can be accessed by other classes and functions too. The public
    members of a class can be accessed from anywhere in the program using the direct member access operator (.) with
    the object of that class.
*/
class Circle
{
public:
    double radius;

    double compute_area()
    {
        return 3.14*radius*radius;
    }

};

int main()
{
    Circle obj;

    // accessing public datamember outside class
    obj.radius = 5.5;

    cout<<"Radius is: "<<obj.radius<<"\n";
    cout<<"Area is: "<<obj.compute_area();


    //output:
    //    Radius is: 5.5
    //    Area is: 94.985

    /*
    In the above program, the data member radius is declared as public so it could be accessed outside the class and
    thus was allowed access from inside main().
    */
}
