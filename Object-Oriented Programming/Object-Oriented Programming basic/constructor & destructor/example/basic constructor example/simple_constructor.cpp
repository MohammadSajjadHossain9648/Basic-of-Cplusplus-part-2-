#include<iostream>
using namespace std;
/*
    to know more: https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.geeksforgeeks.org/constructors-c/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
*/
/*
    A constructor is a special method that is automatically called when an object of a class is created.
    To create a constructor, use the same name as the class, followed by parentheses (): and it does not
    have any return value.
*/
class MyClass      // The class
{
public:            // Access specifier
    MyClass()      // Constructor
    {
        cout<<"\nConstructor is called";
    }
};

int main()
{
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)

    //output:
    //   Constructor is called
}
