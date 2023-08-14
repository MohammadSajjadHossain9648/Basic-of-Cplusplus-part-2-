#include<iostream>
using namespace std;
/*
    to know more: https://www.simplilearn.com/tutorials/cpp-tutorial/oops-concepts-in-cpp
                  https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/
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
    Access specifiers/modifiers:
    Access specifiers are keywords that serve to restrict and define permissions to access data in class members.
    There are three keywords that serve as access specifiers/modifiers in C++:
    1. public
    2. private
    3. protected

    Note: If we do not specify any access modifiers for the members inside the class, then by default the access
    modifier for the members will be Private.
*/
/*
    Let us now look at each one of these access modifiers in detail:
    1. Public: All the class members declared under the public specifier will be available to everyone. The data
    members and member functions declared as public can be accessed by other classes and functions too. The public
    members of a class can be accessed from anywhere in the program using the direct member access operator (.) with
    the object of that class.

    2. Private: The class members declared as private can be accessed only by the member functions inside the class.
    They are not allowed to be accessed directly by any object or function outside the class. Only the member functions
    or the friend functions are allowed to access the private data members of the class.

    3. Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t
    be accessed outside of its class unless with the help of a friend class. The difference is that the class members
    declared as Protected can be accessed by any subclass (derived class) of that class as well.
    Note: This access through inheritance can alter the access modifier of the elements of base class in derived class
    depending on the mode of Inheritance.
*/
int main()
{
}
