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
                  https://dotnettutorials.net/lesson/class-and-objects-in-cpp/
*/
/*
    what is Object-Oriented Programming?
    Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects.

    Structure of object-oriented programming:
    1.Object
    2.Class
    3.Method
    4.Attribute


    1.object: An object is an entity that has state/properties and behavior. or can say that an object is an instance
    of a class. object is a template or blueprint of a class.
    like an example,
        Human ->  state/properties  --> gender, age, height
              ->  behavior  --> walk(), run(), eat()
    so, here all Human is an object individually. gender, name, age, height is the properties of Human class object
    and walk(), run(), eat() is the behavior of Human class object.

    we can define a class to create multiple objects without writing additional code.
    for example:
        Human h1;  //creating an object of Human which can access Human class all properties and behavior
        h1.gender = "male";
        h1.name = "rafi";
        h1.age = 25;
        h1.height = 5.5;




    2.class: a class is a blueprint of the object. It is a logical entity. class does not take any space.
    cause class is a template or blueprint.
    Objects define specific data, such as properties and behaviors, to implement code.
    For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them
    will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here,
    Car is the class and wheels, speed limits, mileage are their properties.

    2.1.A Class is a user-defined data-type which has data members and member functions.
    2.2.Data members are the data variables and member functions are the functions used to manipulate these variables
    and together these data members and member functions define the properties and behaviour of the objects in a Class.
    2.3.In the above example of class Car, the data member will be speed limit, mileage etc and member functions can
    apply brakes, increase speed etc.




    3.Method: A method is a function that performs a task or action. For example, a method may return information
    about an object's data.


    4.Attribute: This structure stores information about an object and defines its state/properties. You can define an
    attribute as part of the class.
*/
/*
    Classes defined with struct and union:
    Classes can be defined not only with keyword class, but also with keywords struct and union.

    The keyword struct, generally used to declare plain data structures, can also be used to declare classes that
    have member functions, with the same syntax as with keyword class. The only difference between both is that
    members of classes declared with the keyword struct have public access by default, while members of classes
    declared with the keyword class have private access by default. For all other purposes both keywords are
    equivalent in this context.

    Conversely, the concept of unions is different from that of classes declared with struct and class, since unions
    only store one data member at a time, but nevertheless they are also classes and can thus also hold member
    functions. The default access in union classes is public.
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

    to know more: read theory_of_access_specifiers_or_modifiers.cpp
*/
/*
    The foundational OOP concepts are or 4 principles of object-oriented programming:
    1.Abstraction
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
    Binding (or wrapping) method and data together into a single unit is known as encapsulation. By doing this, data
    is not easily accessible to the outside world.

    In OOP we achieve encapsulation by making data members as private and having public functions to access these
    data members.
    Encapsulation in C++ is implemented through class and access specifiers.






    3.Inheritance
    When one object/class acquires all the properties and behaviours of parent object/class i.e. known as inheritance.
    It provides code reusability. It is used to achieve runtime polymorphism. two classes have an is-a relationship
    among each other.

    Inheritance is one of the most important features of Object-Oriented Programming.
        1. Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
        2. Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.
        3. Reusability: Inheritance supports the concept of “reusability”, i.e. when we want to create a new class
        and there is already a class that includes some of the code that we want, we can derive our new class from
        the existing class. By doing this, we are reusing the fields and methods of the existing class.
    Example: Class Animal is Parent class and Class Dog, Cat, Cow is Child class of child class of Animal class.

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
    Advantages Of OOP:
    Let us discuss some of the advantages of OOP.

    1) Reusability
    OOP allows the existing code to be reused through inheritance. We can easily acquire the existing functionality
    and improve on it without having to rewrite the code again. This results in less bloated code.

    2) Modularity
    As we modularize the program in OOP, it’s easy to modify or troubleshoot the program if a problem occurs or new
    feature or enhancement is to be added. Modularization also helps in code clarity and makes it more readable.

    3) Flexibility
    OOP helps us with flexible programming using the polymorphism feature. As polymorphism takes many forms, we can
    have operators or functions that will work with many objects and thus save us from writing different functions
    for each object.

    4) Maintainability
    Maintaining code is easier as it is easy to add new classes, objects, etc without much restructuring or changes.

    5) Data and Information Hiding
    OOP aids us in data hiding thereby keeping information safe from leaking. Only the data that is required for the
    smooth functioning of the program are exposed to the user by hiding intrinsic details.
*/
int main()
{
}

