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
    Just like static member variables of class, we can declare class objects as static. Static class objects are
    also initialized only once and remain active throughout the program. As the object is a user-defined type, a
    static class object is initialized similarly to the ordinary objects using a constructor.
*/
class xyz
{
    int i;
public:
    xyz()
    {
        i = 0;
        cout<<"\nConstructor::xyz";
    }
    ~xyz()
    {
        cout<<"\nDestructor::xyz";
    }
};

void f()
{
    static xyz obj;   //declare Static Class Object
}

int main()
{
    f();
    cout<<"\nEnd Main";


    //output:
    //
    //    Constructor::xyz
    //    End Main
    //    Destructor::xyz
}

