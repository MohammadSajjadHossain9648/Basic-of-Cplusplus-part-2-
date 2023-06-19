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
const int foo(int y)
{
    y--;
    return y;
}

const int foo2(const int y)
{
    // y = 9; it'll give CTE error as y is const var its value can't be change
    return y;
}

int main()
{
    int x = 9;
    const int z = 10;
    cout<<foo(x)<<'\n'<<foo(z);

    //output:
    //    8
    //    9


    int x2 = 9;
    const int z2 = 10;
    cout<<'\n'<<foo2(x2)<<'\n'<<foo2(z2);

    //output:
    //    9
    //    10
}
