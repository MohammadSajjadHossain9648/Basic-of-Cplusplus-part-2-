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
/*
    object: An object is an entity that has state/properties and behavior. or can say that an object is an instance
    of a class. object is a template or blueprint of a class.
    like an example,
        Human ->  state/properties  --> gender, name, age, height
              ->  behavior  --> walk(), run(), eat()
    so, here all Human is an object individually. gender, name, age, height is the properties of Human class object
    and walk(), run(), eat() is the behavior of Human class object.

    we can define a class to create multiple objects without writing additional code.
    for example:
        Human h1;  //creating an object of Human which can access Human class all properties and behavior
        h1.gender = "male";
        h1.name = "rafi";
        h1.age = 25;
        h1.height = 5.5;



    class: a class is a blueprint of the object. It is a logical entity. class does not take any space.
    cause class is a template or blueprint.
    Objects define specific data, such as properties and behaviors, to implement code.
    For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them
    will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here,
    Car is the class and wheels, speed limits, mileage are their properties.
*/
/*
    data members are class variable and member functions are class function
*/
//empty class initialize
class Data
{

};

class Man
{
    string name; //private data member without declare access modifier(private)
};

class Human
{
public:
    //object properties/state which we can say as data member
    string name;
    int age;
    string gender;
    double height;


    //object behavior which we can say as member function
    void walk() //can write only -> walk()
    {
        cout<<"\n\n"<<name<<" can walk.";
    }
    void run()
    {
        cout<<"\n"<<name<<" can run.";
    }
    void eat()
    {
        cout<<"\n"<<name<<" can eat.";
    }
};



//initialize class without constructor
class People
{
public:
    //object properties/state which we can say as data member
    string name;
    int age;
    string gender;
    double height;

    //initialize data member using function without constructor
    void setValue(string n, int a, string g, double h)
    {
        name = n;
        age = a;
        gender = g;
        height = h;
    }

    //object behavior which we can say as member function
    void walk() //can write only -> walk()
    {
        cout<<"\n\n"<<name<<" can walk.";
    }
    void run()
    {
        cout<<"\n"<<name<<" can run.";
    }
    void eat()
    {
        cout<<"\n"<<name<<" can eat.";
    }
};


//initialize class without constructor
class Teacher
{
public:
    //data member(also instance variable)
    int id;
    string name;

    //constructor
    Teacher(int i, string n)
    {
        id = i;
        name = n;
    }

    //member function
    void display()
    {
        cout<<"\n"<<id<<"  "<<name;
    }
};


int main()
{
    //object create of class Data
    Data d;

    //object create of class Man
    Man m;



//initialize class data member in main()
    //create object h1 of Human class
    Human h1;

    //initialize Human class data member value in main()
    h1.name = "rafi";
    h1.age = 25;
    h1.gender = "male";
    h1.height = 5.5;

    //print all details of h1
    cout<<"\nHuman class: "<<"\nname: "<<h1.name<<"\ngender: "<<h1.gender<<"\nage: "<<h1.age<<"\nheight: "<<h1.height;
    h1.walk();
    h1.run();
    h1.eat();


    //output:
    //
    //    Human class:
    //    name: rafi
    //    gender: male
    //    age: 25
    //    height: 5.5
    //
    //    rafi can walk.
    //    rafi can run.
    //    rafi can eat.



//initialize class without constructor
    //create object p1 of People class
    People p1;

    p1.setValue("narin", 35, "male", 5.2);

    //print all details of p1
    cout<<"\n\nPeople class: "<<"\nname: "<<p1.name<<"\ngender: "<<p1.gender<<"\nage: "<<p1.age<<"\nheight: "<<p1.height;
    p1.walk();
    p1.run();
    p1.eat();


    //output:
    //
    //    People class:
    //    name: narin
    //    gender: male
    //    age: 35
    //    height: 5.2
    //
    //    narin can walk.
    //    narin can run.
    //    narin can eat.




//another example: initialize class without constructor
    Teacher t(1005, "tamim");
    t.display();


    //output: 1005  tamim
}
