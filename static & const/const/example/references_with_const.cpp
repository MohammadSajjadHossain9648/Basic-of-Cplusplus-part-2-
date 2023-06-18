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
/*
    note: reference variable never change, only change original value
*/
int main()
{
    int x = 10;

    const int &ref1 = x; //same as -> int const &ref2 = x; and reference to const int and only change x value not ref

    cout<<"const int &ref1 or &ref2 = "<<ref1;

    //changing value of references
    //ref2 = 20; or ref2 = 20; //show error -> can not change ref value

    x = 20;
    cout<<"\nafter change x = 20 -> ref1 or ref2 = "<<ref1;


    //output:
    //    const int &ref1 or &ref2 = 10
    //    after change x = 20 -> ref1 or ref2 = 20
}
