#include<iostream>
using namespace std;
/*
    to know more: https://www.simplilearn.com/tutorials/cpp-tutorial/oops-concepts-in-cpp
                  https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/
                  https://www.geeksforgeeks.org/access-modifiers-in-c/
                  https://www.freecodecamp.org/news/object-oriented-programming-in-c/
                  https://www.javatpoint.com/cpp-oops-concepts
                  https://www.programiz.com/cpp-programming/object-class
                  https://www.educative.io/blog/is-cpp-object-oriented-programming-language
                  https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP
                  https://www.indeed.com/career-advice/career-development/what-is-object-oriented-programming
                  https://www.codecademy.com/learn/c-plus-plus-for-programmers/modules/object-oriented-programming-in-cpp/cheatsheet
                  https://levelup.gitconnected.com/cpp-object-oriented-programming-an-in-depth-guide-f56a597091d8
*/
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
    //constructor
    Circle(double r)
    {
        radius = r;
    }

    void compute_area()
    {
        double area = 3.14*radius*radius;

        cout<<"\nRadius is: "<<radius;
        cout<<"\nArea is: "<<area;
    }

};

// main function
int main()
{
    // creating object of the class
    Circle obj(1.5);

    obj.compute_area();

    //output:
    //    Radius is: 1.5
    //    Area is: 7.065
}

