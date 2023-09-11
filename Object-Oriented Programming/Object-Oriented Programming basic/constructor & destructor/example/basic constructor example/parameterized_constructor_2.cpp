#include<iostream>
using namespace std;

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
