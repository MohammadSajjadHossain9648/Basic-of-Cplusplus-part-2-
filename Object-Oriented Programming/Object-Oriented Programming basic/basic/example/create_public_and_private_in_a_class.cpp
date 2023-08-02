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
class Room
{
private:
    double length;
    double width;
    double height;

public:
    //member function to initialize private variables
    initData(double len, double wdt, double hgt)
    {
        length = len;
        width = wdt;
        height = hgt;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    // create object of Room class
    Room r1;

    // assign values to data members
    r1.initData(42.5, 30.8, 19.2);

    cout<<"\n\nArea of Room =  "<<r1.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r1.calculateVolume();


    //output:
    //
    //    Area of Room =  1309
    //    Volume of Room =  25132.8
}
