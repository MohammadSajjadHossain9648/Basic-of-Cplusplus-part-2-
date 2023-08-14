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
