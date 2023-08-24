#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/destructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.scaler.com/topics/cpp/constructor-and-destructor-in-cpp/
                  https://dotnettutorials.net/lesson/class-and-objects-in-cpp/
                  https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
                  https://www.javatpoint.com/cpp-destructor
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
*/
/*
    A destructor is a special method that is automatically called when an object is going to be destroyed.
    To create a destructor, use the same name as the class with ~, followed by parentheses (){} and it does not
    have any return value and it does not take arguments/parameters.

    remember that the destructor
    1. has the same name as the class with ~,
    2. does not have a return type and must take without arguments/parameters,
    3. is public
*/
/*
    Destructor:
    1.Destructor is also a special member function like constructor. Destructor destroys the class objects created
    by constructor.
    2.Destructor has the same name as their class name preceded by a tilde (~) symbol.
    3.It is not possible to define more than one destructor.
    4.The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be
    overloaded.
    5.Destructor neither requires any argument nor returns any value.
    6.It is automatically called when object goes out of scope.
    7.Destructor release memory space occupied by the objects created by constructor.
    8.In destructor, objects are destroyed in the reverse of an object creation.
*/
/*
    Properties of Destructor:
    1. Destructor function is automatically invoked when the objects are destroyed.
    2. It cannot be declared static or const.
    3. The destructor does not have arguments.
    4. It has no return type not even void.
    5. An object of a class with a Destructor cannot become a member of the union.
    6. A destructor should be declared in the public section of the class.
    7. The programmer cannot access the address of destructor.

    When is destructor called?
    A destructor function is called automatically when the object goes out of scope:
    (1) the function ends
    (2) the program ends
    (3) a block containing local variables ends
    (4) a delete operator is called
*/
/*
    Characteristics of a Destructor in C++
    1. A destructor deallocates memory occupied by the object when it’s deleted.
    2. A destructor cannot be overloaded. In function overloading, functions are declared with the same name in
    the same scope, except that each function has a different number of arguments and different definitions. But
    in a class, there is always a single destructor that does not accept any parameters. Hence, a destructor cannot
    be overloaded.
    3. A destructor is always called in the reverse order of the constructor. In C++, variables and objects are
    allocated on the Stack. The Stack follows the LIFO (Last-In-First-Out) pattern. So, the deallocation of memory
    and destruction is always carried out in the reverse order of allocation and construction. This can be seen in
    the code below.
    4. A destructor can be written anywhere in the class definition. But to bring an amount order to the code, a
    destructor is always defined at the end of the class definition.
*/
int main()
{

}
