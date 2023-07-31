#include<iostream>
using namespace std;
/*
    to know more: https://www.simplilearn.com/tutorials/cpp-tutorial/oops-concepts-in-cpp
                  https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/
                  https://www.freecodecamp.org/news/object-oriented-programming-in-c/
                  https://www.javatpoint.com/cpp-oops-concepts
                  https://www.studytonight.com/cpp/class-and-objects.php
                  https://www.programiz.com/cpp-programming/object-class
                  https://www.educative.io/blog/is-cpp-object-oriented-programming-language
                  https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP
                  https://www.indeed.com/career-advice/career-development/what-is-object-oriented-programming
                  https://www.codecademy.com/learn/c-plus-plus-for-programmers/modules/object-oriented-programming-in-cpp/cheatsheet
                  https://levelup.gitconnected.com/cpp-object-oriented-programming-an-in-depth-guide-f56a597091d8
                  https://dotnettutorials.net/lesson/final-keyword-in-cpp/
*/
/*
    The foundational OOP concepts are or 4 principles of object-oriented programming:
    1.Abstraction
    Abstraction means displaying only essential information and hiding the details.
    Displaying only essential information and hiding the details from the user i.e. known as Abstraction.

    Abstraction is the process of hiding important/irrelevant information from the user. For Example, when we are
    driving the car, first we start the engine by inserting a key. We are not aware of the process that goes on in
    the background for starting the engine.
    It helps in displaying the essential features without showing the details or the functionality to the user.
    Using abstraction in programming, we can hide unnecessary details from the user. By using abstraction in our
    application, the end user is not affected even if we change the internal implementation.

        1. Abstraction using Classes: We can implement Abstraction in C++ using classes. The class helps us to group
        data members and member functions using available access specifiers. A Class can decide which data member
        will be visible to the outside world and which is not.
        2. Abstraction in Header files: One more type of abstraction in C++ can be header files. For example, consider
        the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply
        call the function pow() present in the math.h header file and pass the numbers as arguments without knowing
        the underlying algorithm according to which the function is actually calculating the power of numbers.

    In C++, we use abstract class and interface to achieve abstraction.




    2.Encapsulation
    Binding (or wrapping) data member and member function together into a single unit is known as encapsulation.
    By doing this, data is not easily accessible to the outside world.

    In OOP we achieve encapsulation by making data members as private and having public functions to access these
    data members.
    Encapsulation in C++ is implemented through class and access specifiers.






    3.Inheritance
    When one class acquires all the data members and member functions of another class  i.e. known as inheritance.
    or, can say another way
    When one object/class acquires all the properties and behaviours of parent object/class i.e. known as inheritance.
    It provides code reusability. It is used to achieve runtime polymorphism. two classes have an is-a relationship
    among each other.

    Inheritance is one of the most important features of Object-Oriented Programming.
        1. Sub Class: The class that inherits properties from another class is called Child class or Sub class
        or Derived Class.
        2. Super Class:The class whose properties are inherited by sub class is called Parent class or Base Class
        or Super class.
        3. Reusability: Inheritance supports the concept of “reusability”, i.e. when we want to create a new class
        and there is already a class that includes some of the code that we want, we can derive our new class from
        the existing class. By doing this, we are reusing the fields and methods of the existing class.
    Example: Class Animal is Parent class and Class Dog, Cat, Cow is Child class of parent class or Animal class.

    As such we can design a new class by acquiring the properties and functionality of another class and in this
    process, we need not modify the functionality of the parent class. We only add new functionality to the class.

    We can implement inheritance in C++ by creating a Sub class or Derived Class to a Base Class or Super class.






    4.Polymorphism
    Polymorphism means many forms. When one task is performed by different ways i.e. known as polymorphism.
    For example: to convince the customer differently, to draw something e.g. shape or rectangle etc.

    Polymorphism is an important feature of OOP and is usually implemented as operator overloading or function
    overloading. Operator overloading is a process in which an operator behaves differently in different situations.
    Similarly, in function overloading, the same function behaves differently in different situations.

    There are two types of polymorphism in C++:
    1. Compile time polymorphism: Achieved through function overloading or operator overloading
    2. Run time polymorphism: Achieved through function overriding and virtual functions

    In C++, we use Function overloading and Function overriding to achieve polymorphism.
*/
/*
    Difference between abstraction and encapsulation:

    Abstraction:
    1.Displaying only essential information and hiding the details from the user i.e. known as Abstraction.
    2.we can use/implement using interface and abstract class.
    3.Abstraction means hiding implementation using interface and abstract class.
    4.Abstraction solves the problem in design level.
    5.Abstraction hides unwanted details on the design level.


    Inheritance:
    1.Binding (or wrapping) data member and member function together into a single unit is known as encapsulation.
    2.we can use/implement using access modifiers like public, private and protected.
    3.Inheritance means hiding data using setter and getter.
    4.Inheritance solves the problem in implementation level.
    5.Inheritance hides details on the implementation level.
*/
int main()
{
}
