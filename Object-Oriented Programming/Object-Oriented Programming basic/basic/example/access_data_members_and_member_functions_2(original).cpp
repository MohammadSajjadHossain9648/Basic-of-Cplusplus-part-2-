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

class Room2
{
public:
    //data member
    double length;
    double breadth;
    double height;

    Room2(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

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

class Room3
{
private:
    //data member
    double length;
    double breadth;
    double height;

public:
    Room3(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void setLength(int l)
    {
        length = l;
    }
    int getLength()
    {
        return length;
    }

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
//assign values to data members
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



// another above same example: assign values to data members with using constructor
    // create object of Room class
    Room2 r2(42.5, 30.8, 19.2);

    cout<<"\n\nArea of Room =  "<<r2.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r2.calculateVolume();



    //after changing r1 object length
    cout<<"\n\nAfter changing r2 length: ";
    r2.length = 50;
    cout<<"\n\nArea of Room =  "<<r2.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r2.calculateVolume();


    //output:
    //
    //    Area of Room =  1309
    //    Volume of Room =  25132.8
    //
    //
    //    After changing r2 length:
    //
    //    Area of Room =  1540
    //    Volume of Room =  29568


// another above same example: assign values to data members with using constructor
    // create object of Room class
    Room3 r3(42.5, 30.8, 19.2);

    cout<<"\n\nArea of Room =  "<<r3.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r3.calculateVolume();



    //after changing r1 object length
    cout<<"\n\nAfter changing r3 length: ";
    r3.setLength(50);   //r3.length = 50; ->show error

    cout<<"\n\nArea of Room =  "<<r3.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r3.calculateVolume();

    //output:
    //
    //    Area of Room =  1309
    //    Volume of Room =  25132.8
    //
    //
    //    After changing r3 length:
    //
    //    Area of Room =  1540
    //    Volume of Room =  29568
}
