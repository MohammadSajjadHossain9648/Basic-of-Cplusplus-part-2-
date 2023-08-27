#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/constructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
*/
class Person
{
private:
    string name;
    int age;

public:

    // declaring constructor
    Person()
    {
        cout<<"Default constructor is called"<<endl;
        name = "student";
        age = 12;
    }

    // display function to print the class data members value
    void display()
    {
        cout<<"Name of current object: "<<name<<endl;
        cout<<"Age of current object: "<<age<<endl;
    }

};
int main()
{
    // creating object of class using default constructor
    Person obj;

    // printing class data members
    obj.display();



    //output:
    //    Default constructor is called
    //    Name of current object: student
    //    Age of current object: 12
}
