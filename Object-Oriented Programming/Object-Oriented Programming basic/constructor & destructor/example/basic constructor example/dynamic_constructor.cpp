#include<iostream>
using namespace std;

class Person
{
private:
    int* age;

public:
    Person(int* person_age)
    {
        cout<<"Constructor for age is called"<<endl;

        // allocating memory
        age = new int;
        age = person_age;
    }

    // display function to print the class data members value
    void display()
    {
        cout<<"Age of current object: "<<*age<<endl;
        cout<<endl;
    }

};
int main()
{
    // creating objects of class using parameterized constructor
    int age = 25;
    Person obj1(&age);

    // printing class data members for first object
    obj1.display();


    //output:
    //    Constructor for age is called
    //    Age of current object: 25
}
