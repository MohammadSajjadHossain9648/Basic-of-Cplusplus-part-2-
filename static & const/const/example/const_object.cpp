#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/const-keyword-in-cpp/
                  https://www.javatpoint.com/const-keyword-in-cpp
                  https://learn.microsoft.com/en-us/cpp/cpp/const-cpp?view=msvc-170
                  https://www.studytonight.com/cpp/const-keyword.php
                  https://www.freecodecamp.org/news/constants-in-c-explained-how-to-use-define-and-const-keyword/
                  https://www.learncpp.com/cpp-tutorial/const-variables-and-symbolic-constants/
                  https://eecs280staff.github.io/notes/06_Compound_Objects.html
                  https://www.udacity.com/blog/2021/08/developers-guide-to-cpp-constant-variables.html
                  https://www.codesdope.com/cpp-const-keyword/
                  https://www.possibility.com/Cpp/const.html
*/
class ABC
{
public:
    // define data member
    int A;

    // create constructor of the class ABC
    ABC ()
    {
        A = 10; // define a value to A
    }
};

int main ()
{
// declare a constant object
    const ABC obj;
    cout<<"The value of A: "<<obj.A<<endl;
    // obj.A = 20; // It returns a compile time error


    //output:
    //   The value of A: 10
}
