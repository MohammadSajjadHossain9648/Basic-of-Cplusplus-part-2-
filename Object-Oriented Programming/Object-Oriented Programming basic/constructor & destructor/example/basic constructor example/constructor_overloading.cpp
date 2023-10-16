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
class constructor
{
public:
    float area;

    // Constructor with no parameters
    constructor()
    {
        area = 0; //Giving value 0 to variable area
    }

    // Constructor with two parameters a and b
    constructor(int a, int b)
    {
        area = a * b;
    }

    void display() //member function of the class
    {
        cout<< "Area: "<<area<< endl;
    }
};

int main()
{
    // Constructor Overloading with two different constructors of class name
    constructor obj;
    constructor obj2(20, 10);

    obj.display();
    obj2.display();


    //output:
    //    Area: 0
    //    Area: 200
}
