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
int main()
{
    const double arr[4] = { 1.1, 2.3, -4.5, 8 };
    //arr[2] = 3.1;          // ERROR -- attempt to assign to const object
    cout<<arr[0];

    //output:
    //  1.1
}
