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
    Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t
    be accessed outside of its class unless with the help of a friend class. The difference is that the class members
    declared as Protected can be accessed by any subclass (derived class) of that class as well.
    Note: This access through inheritance can alter the access modifier of the elements of base class in derived class
    depending on the mode of Inheritance.
*/
class Parent
{
    // protected data members
    protected:
    int id_protected;

};

// sub class or derived class from public base class
class Child : public Parent
{
    public:
    void setId(int id)
    {
        // Child class is able to access the inherited protected data members of base class
        id_protected = id;
    }

    void displayId()
    {
        cout<<"id_protected is: "<<id_protected<<endl;
    }
};

int main() {

    Child obj1;

    // member function of the derived class can access the protected data members of the base class
    obj1.setId(81);
    obj1.displayId();

    //output:
    //  id_protected is: 81
}
