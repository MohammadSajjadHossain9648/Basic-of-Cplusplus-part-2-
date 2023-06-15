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
class StarWars
{
    public:
    int i;
    StarWars(int x)    // constructor
    {
        i = x;
    }

    int falcon() const  // constant function
    {
        /*
            can do anything but will not
            modify any data members
        */
        cout<<"\nFalcon has left the Base";
    }

    int gamma()
    {
        i++;
    }
};

int main()
{
    StarWars objOne(10);        // non const object
    const StarWars objTwo(20);      // const object

    objOne.falcon();     // No error
    objTwo.falcon();     // No error

    cout<<'\n'<<objOne.i<<'\n'<<objTwo.i;

    objOne.gamma();     // No error
    //objTwo.gamma();     // Compile time error


    //output:
    //
    //    Falcon has left the Base
    //    Falcon has left the Base
    //    10
    //    20
}
