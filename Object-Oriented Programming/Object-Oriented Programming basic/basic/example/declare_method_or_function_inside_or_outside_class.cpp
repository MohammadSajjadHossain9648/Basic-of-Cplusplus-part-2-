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
class Method
{
public: // Access specifier
    // Method/function defined inside the class
    void inside()
    {
        cout<<"\ni am inside class method.";
    }

    // Method/function declaration
    void outside();
};

// Method/function definition outside the class
void Method::outside()
{
    cout<<"\ni am outside class method.";
};

int main()
{
    Method m;
    m.inside();
    m.outside();

    //output:
    //
    //    i am inside class method.
    //    i am outside class method.
}
