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
        void compute_area(double r)
        {   // member function can access private data member radius
            radius = r;

            double area = 3.14*radius*radius;

            cout<<"\nRadius is: "<<radius;
            cout<<"\nArea is: "<<area;
        }

};

// main function
int main()
{
    // creating object of the class
    Circle obj;

    // trying to access private data member directly outside the class
    obj.compute_area(1.5);


    //output:
    //    Radius is: 1.5
    //    Area is: 7.065
}

