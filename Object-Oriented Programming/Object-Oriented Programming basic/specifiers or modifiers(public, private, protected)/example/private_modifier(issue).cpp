#include<iostream>
using namespace std;
/*
    Private: The class members declared as private can be accessed only by the member functions inside the class.
    They are not allowed to be accessed directly by any object or function outside the class. Only the member functions
    or the friend functions are allowed to access the private data members of the class.
*/
class Circle
{
    // private data member
    private:
        double radius;

    // public member function
    public:
        double compute_area()
        {   // member function can access private data member radius
            return 3.14*radius*radius;
        }

};

int main()
{
    // creating object of the class
    Circle obj;

    // trying to access private data member directly outside the class
    obj.radius = 1.5;

    cout<<"Area is:"<<obj.compute_area();


    //show error : error: 'double Circle::radius' is private

    /* explanation:
    The output of the above program is a compile time error because we are not allowed to access the private data
    members of a class directly from outside the class. Yet an access to obj.radius is attempted, but radius being
    a private data member, we obtained the above compilation error.

    solve issue: see example_of_private_modifier(solve).cpp
    However, we can access the private data members of a class indirectly using the public member functions of the class.
    */
}
