#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/static-variables-in-c/
                  https://www.geeksforgeeks.org/static-keyword-cpp/
                  https://www.geeksforgeeks.org/memory-layout-of-c-program/
                  https://www.geeksforgeeks.org/what-are-static-functions-in-c/
                  https://dotnettutorials.net/lesson/static-variables-in-cpp
                  https://linuxhint.com/static-variable-cpp/
                  https://www.learncpp.com/cpp-tutorial/static-local-variables/
                  https://www.cs.uaf.edu/2010/spring/cs202/lecture/02_16_static.html
                  https://www.scaler.com/topics/static-variables-in-c/
                  https://www.scaler.com/topics/cpp/static-member-in-cpp/
                  https://www.programiz.com/cpp-programming/storage-class
                  https://www.softwaretestinghelp.com/static-in-cpp/
                  https://www.studytonight.com/cpp/static-keyword.php
                  https://www.javatpoint.com/cpp-static
                  https://www.tutorialspoint.com/static-keyword-in-cplusplus
*/
/*
    Static Member Functions:

    These functions work for the class as whole rather than for a particular object of a class.
    It can be called using an object and the direct member access . operator. But, its more typical to call a
    static member function by itself, using class name and scope resolution :: operator.
    These functions cannot access ordinary data members and member functions, but only static data members and
    static member functions.
    It doesn't have any "this" keyword which is the reason it cannot access ordinary members.
*/
/*
    Static Data Member in Class:

    Static data members of class are those members which are shared by all the objects. Static data member has
    a single piece of storage, and is not available as separate copy with each object, like other non-static
    data members.
    Static member variables (data members) are not initialied using constructor, because these are not dependent
    on object initialization.
    Also, it must be initialized explicitly, always outside the class. If not initialized, Linker will give error.
    Once the definition for static data member is made, user cannot redefine it. Though, arithmetic operations
    can be performed on it.
*/
class Base
{
public :
    static int val;     //Static Data Member
    static int func(int a)    //Static Member Functions
    {
        cout<<"\nStatic member function called";
        cout<<"\nThe value of a : "<<a;
    }
};

int Base::val=28;   //static variable initialisation

int main()
{
    Base b;
    Base::func(8);   // calling member function directly with class name
    cout<<"\nThe static variable value : "<<b.val;    //calling Static Data Member in Class

    //can initialize val value in main function
    b.val = 10;
    cout<<"\n\nAfter changing value:\nThe static variable value : "<<b.val;    //calling Static Data Member in Class

    //output:
    //    Static member function called
    //    The value of a : 8
    //    The static variable value : 28
    //
    //    After changing value:
    //    The static variable value : 10
}
