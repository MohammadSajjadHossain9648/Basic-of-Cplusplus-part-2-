#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/constructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.scaler.com/topics/cpp/constructor-and-destructor-in-cpp/
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
                  https://www.mygreatlearning.com/blog/constructor-in-cpp/
*/
/*
    A constructor is a special method that is automatically called when an object is created.
    To create a constructor, use the same name as the class, followed by parentheses (){} and it does not
    have any return value. we can easily access private data member using constructor.

    remember that the constructor
    1. has the same name as the class,
    2. does not have a return type and can take with or without arguments/parameters,
    3. is public


    remember: when we create a class object, a default constructor is create in class.
    or can say -> Even if we do not define any constructor explicitly, the compiler will automatically provide
    a default constructor implicitly.

    Types of c++ constructors
    1. Default Constructor: A constructor which has no parameters is called default constructor or a zero-argument
    constructor. It does not take or has no arguments/parameters.
    note: if create any constructor(2,3,4), the default constructor died in that time.

    2. Parameterized Constructor: A constructor which has parameters is called parameterized constructor.

    3. Copy Constructor: A constructor which has copy of another object parameters is called copy constructor.
    there are 2 types of copy constructor: 1)default copy constructor 2) user defined copy constructor

    4. Dynamic Constructor(extra)
*/
/*
    Member initialization in constructors:
    When a constructor is used to initialize other members, these other members can be initialized directly,
    without resorting to statements in its body. This is done by inserting, before the constructor's body, a
    colon (:) and a list of initializations for class members. For example, consider a class with the following
    declaration:

        class Rectangle {
            int width,height;
          public:
            Rectangle(int,int);
            int area() {return width*height;}
        };

    The constructor for this class could be defined, as usual, as:
        Rectangle::Rectangle (int x, int y) { width=x; height=y; }

    But it could also be defined using member initialization as:
        Rectangle::Rectangle (int x, int y) : width(x) { height=y; }

    Or even:
        Rectangle::Rectangle (int x, int y) : width(x), height(y) { }

    Note how in this last case, the constructor does nothing else than initialize its members, hence it has an
    empty function body.
*/
/*
    A constructor is different from normal functions in following ways:

    1. Constructor has same name as the class itself
    2. Default Constructors don’t have input argument however, Copy and Parameterized Constructors have
    input arguments
    3. Constructors don’t have return type
    4. A constructor is automatically called when an object is created.
    5. It must be placed in public section of class.
    6. If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no
    parameters and has an empty body).
*/
/*
    Characteristics of the constructor:
    1. The name of the constructor is the same as its class name.
    2. Constructors are mostly declared in the public section of the class though it can be declared in the private
    section of the class.
    3. Constructors do not return values; hence they do not have a return type.
    4. A constructor gets called automatically when we create the object of the class.
    5. Constructors can be overloaded.
    6. Constructor can not be declared virtual.
    7. Constructor cannot be inherited.
    8. Addresses of Constructor cannot be referred.
    9. Constructor make implicit calls to new and delete operators during memory allocation.
*/
int main()
{
}
