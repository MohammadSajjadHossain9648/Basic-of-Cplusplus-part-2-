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
class Test
{
    const int i;
    public:
    Test(int x):i(x)
    {
        cout<<"\ni value set: "<<i;
    }
};

int main()
{
    Test t(10);
    Test s(20);

    //output:
    //
    //    i value set: 10
    //    i value set: 20

    /*
    In this program, i is a constant data member, in every object its independent copy will be present, hence it
    is initialized with each object using the constructor. And once initialized, its value cannot be changed. The
    above way of initializing a class member is known as Initializer List in C++.
    */
}
