#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/constructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.scaler.com/topics/cpp/constructor-and-destructor-in-cpp/
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
                  https://www.mygreatlearning.com/blog/constructor-in-cpp/
*/
class Demo
{
    int a, b;
public:
    Demo()   // default constructor
    {
        cout<<"Default Constructor"<<endl;
    }
    Demo(int a, int b):a(a),b(b)  //parameterised constructor
    {
        cout<<"parameterized constructor -> values are "<<a <<" and "<< b<<endl;
    }

} instance(100,250);  //instance is a Demo class object


int main()
{
    //output:
    //   parameterized constructor -> values are 100 and 250
}
