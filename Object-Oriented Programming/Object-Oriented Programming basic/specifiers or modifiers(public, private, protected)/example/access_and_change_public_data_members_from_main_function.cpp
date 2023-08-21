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
    getter use for read/fetch only.
    setter use for accessing the private data member and for security purpose we can add condition in setter
    function which we can call encapsulation.
*/
/*
    Why Classes Need Getters and Setters:
    The convention when designing a C++ class is to make the member variables private to control access to them.
    With data hiding, you can write code that checks the data coming into a class to make sure it is valid before
    assigning it to member variables.

    For example, if a class is storing a person’s age, by marking the member variable as private you can provide
    access to the variable through a function that first checks to make sure the data being passed in is a valid age.
    If not, you can assign a default value or ask the user to enter the data in again.

    Without this check, the data entered for an age can be any legal value allowed for that type by the compiler.
    So an age passed to an integer variable can be 34 or it can be 123,345 since those are both valid integer
    values. A data validating function can stop illegal values from entering the object and preserving the integrity
    of the data.

    Since a member variable marked as private cannot be accessed in any matter, a class must also provide means for
    the data stored in a member variable to be retrieved from an object, if that is part of the design. This function
    is not as important for maintaining data integrity but it is usually a practical necessity.

    Our object-oriented programs can meet these data setting and data retrieval needs by providing getter and setter
    member functions as part of the class interface.
*/
class Voter
{
public:
    string name;
    int age;

    Voter(string n, int a)
    {
        name = n;
        age = a;
    }

    //display all eligible voter list
    void display()
    {
        cout<<"\n\nname : "<<name<<"\nage: "<<age;
    }
};

int main()
{
    Voter p1("rafi", 20);
    cout<<"\n\nname : "<<p1.name<<"\nage: "<<p1.age;

    /* access name and age together with call:
            p1.display();
    */


//change age of p1
    p1.age = 25;
    cout<<"\n\nafter changing age\nname : "<<p1.name<<"\nage: "<<p1.age;


    //output:
    //
    //    name : rafi
    //    age: 20
    //
    //    after changing age
    //    name : rafi
    //    age: 25
}
