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
// Function foo() with variable const int
void foo(const int y)
{
    // y = 6; const value can't be change
    cout<<y;
}

// Function foo1() with variable int
void foo1(int y)
{
    // Non-const value can be change
    y = 5;
    cout<<'\n'<<y;
}

// Driver Code
int main()
{
    int x = 9;
    const int z = 10;

    foo(z);
    foo1(x);

    //output:
    //    10
    //    5
}
