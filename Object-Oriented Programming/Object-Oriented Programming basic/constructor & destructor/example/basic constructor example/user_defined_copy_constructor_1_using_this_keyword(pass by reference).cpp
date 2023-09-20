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
class Rectangle
{
private:
    double length;
    double width;

public:
    // parameterized constructor
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    // copy constructor with a Rectangle object as parameter copies data of the obj parameter
    Rectangle(Rectangle &obj)   //write pass by reference and never write pass by value -> Rectangle(Rectangle obj)
    {
        length = obj.length;
        width = obj.width;

        /*same as
        this->length = obj.length;
        this->width = obj.width;
        */
    }


    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    // create objects to call constructors
    Rectangle obj1(10,6);

    Rectangle obj2(obj1);   //copy the content using object and can write same as -> Rectangle obj2 = obj1;

    /*whats mean -> Rectangle obj2(obj1);
    obj2.length = obj1.length;
    obj2.width = obj1.width;
    */


    //print areas of rectangles
    cout<<"Area of Rectangle 1: "<<obj1.calculateArea();
    cout<<"\nArea of Rectangle 2: "<<obj2.calculateArea();


    //output:
    //    Area of Rectangle 1: 60
    //    Area of Rectangle 2: 60
}
