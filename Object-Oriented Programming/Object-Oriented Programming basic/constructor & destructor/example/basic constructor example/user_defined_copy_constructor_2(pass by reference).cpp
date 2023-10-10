#include<iostream>
using namespace std;

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
