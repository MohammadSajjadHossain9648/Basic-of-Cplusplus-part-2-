#include<iostream>
using namespace std;

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
