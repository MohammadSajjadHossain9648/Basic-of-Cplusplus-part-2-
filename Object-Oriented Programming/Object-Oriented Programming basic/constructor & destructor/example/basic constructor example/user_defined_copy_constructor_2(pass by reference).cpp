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
    Person(string person_name, int person_age)
    {
        cout<<"Constructor for both name and age is called"<<endl;
        name = person_name;
        age = person_age;
    }

    Person(const Person& obj)  //write pass by reference and never write pass by value -> Person(const Person obj)
    {
        cout<<"Copy constructor is called"<<endl;
        name = obj.name;
        age = obj.age;
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
    Person obj1("First person",25);

    // printing class data members for first object
    obj1.display();

    // creating copy of the obj1
    Person obj2(obj1);

    // printing class data members for second object
    obj2.display();



    //output:
    //    Constructor for both name and age is called
    //    Name of current object: First person
    //    Age of current object: 25
    //
    //    Copy constructor is called
    //    Name of current object: First person
    //    Age of current object: 25
}
