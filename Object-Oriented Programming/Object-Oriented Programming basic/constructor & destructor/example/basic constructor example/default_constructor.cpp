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
class Data
{
public:
    int a, b;

    // Default Constructor
    Data()
    {
        a = 100;
        b = 200;
    }
};

int main()
{
    Data dt;  //Object created
    cout<<"Value of a: "<<dt.a;
    cout<<"\nValue of b: "<<dt.b;


    //output:
    //    Value of a: 100
    //    Value of b: 200
}
