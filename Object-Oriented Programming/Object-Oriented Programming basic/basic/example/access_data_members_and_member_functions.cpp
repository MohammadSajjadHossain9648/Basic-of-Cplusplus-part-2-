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
    data members/attributes are class variable and member functions are class function
*/
class Man
{
    string name; //private data member without declare access modifier(private)
};

class PI
{
public:
    double pi = 3.1416; //public data member

    int printPi() //public member function
    {
        cout<<"\nPI value in class: "<<pi;
    }
};


class Student
{
public:
    //data member(also instance variable)
    int id;
    string name;

    //member function to initialize value
    void setValue(int i, string n)
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


class Room
{
public:
    //data member
    double length;
    double breadth;
    double height;

    //member function
    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};


int main()
{
    //object create of class Man
    Man m;

//another example
    //object create of class PI
    PI a;

    //access data member which is a.pi
    cout<<"\nPI value in main(): "<<a.pi;

    //access member function
    a.printPi();


    //output:
    //
    //    PI value in main(): 3.1416
    //    PI value in class: 3.1416




//another example
    Student s1;
    Student s2;

    s1.setValue(201, "asif");
    s2.setValue(202, "faisal");

    /* without setValue function
    s1.id = 201;
    s1.name = "asif";

    s2.id = 202;
    s2.name = "faisal";
    */

    s1.display();
    s2.display();

    //output:
    //    201  asif
    //    202  faisal




//another example: initialize value using constructor
    Teacher t(1005, "tamim");
    t.display();


    //output: 1005  tamim



// another example: assign values to data members
    // create object of Room class
    Room r1;

    // assign values to data members
    r1.length = 42.5;
    r1.breadth = 30.8;
    r1.height = 19.2;

    cout<<"\n\nArea of Room =  "<<r1.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r1.calculateVolume();



    //after changing r1 object length
    cout<<"\n\nAfter changing r1 length: ";
    r1.length = 50;
    cout<<"\n\nArea of Room =  "<<r1.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r1.calculateVolume();


    //output:
    //
    //    Area of Room =  1309
    //    Volume of Room =  25132.8
    //
    //
    //    After changing r1 length:
    //
    //    Area of Room =  1540
    //    Volume of Room =  29568
}
