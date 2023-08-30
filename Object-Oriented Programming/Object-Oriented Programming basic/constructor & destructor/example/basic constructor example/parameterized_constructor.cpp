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
    double height;

public:
    // parameterized constructor
    Rectangle(double l, double h)
    {
        length = l;
        height = h;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create objects to call constructors
    Rectangle obj1(10,6);
    Rectangle obj2(13,8);


    cout<<"Area of Rectangle 1: "<<obj1.calculateArea();
    cout<<"\nArea of Rectangle 2: "<<obj2.calculateArea();


    //output:
    //    Area of Rectangle 1: 60
    //    Area of Rectangle 2: 104
}
