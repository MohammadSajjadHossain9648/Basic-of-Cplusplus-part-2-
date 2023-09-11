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

    // declaring parameterized constructor of three different types
    Person(string person_name)
    {
        cout<<"Constructor to set name is called"<<endl;
        name = person_name;
        age = 12;
    }

    Person(int person_age)
    {
        cout<<"Constructor to set age is called"<<endl;
        name = "Student";
        age = person_age;
    }

    Person(string person_name, int person_age)
    {
        cout<<"Constructor for both name and age is called"<<endl;
        name = person_name;
        age = person_age;
    }
    // display function to print the class data members value
    void display()
    {
        cout<<"Name of current object: "<<name<<endl;
        cout<<"Age of current object: "<<age<<endl;
        cout<<endl;
    }

};
int main()
{
    // creating objects of class using parameterized constructor
    Person obj1("First person");

    // printing class data members for first object
    obj1.display();

    Person obj2(25);

    // printing class data members for second object
    obj2.display();

    Person obj3("Second person",15);

    // printing class data members for third object
    obj3.display();


    //output:
    //    Constructor to set name is called
    //    Name of current object: First person
    //    Age of current object: 12
    //
    //    Constructor to set age is called
    //    Name of current object: Student
    //    Age of current object: 25
    //
    //    Constructor for both name and age is called
    //    Name of current object: Second person
    //    Age of current object: 15
}
