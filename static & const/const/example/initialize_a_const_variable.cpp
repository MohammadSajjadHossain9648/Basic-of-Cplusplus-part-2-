#include<iostream>
using namespace std;
/*
    note: const variable never change
*/
/*
    What is a symbolic constant?
    A symbolic constant is a name that is given to a constant value. Constant variables are one type of symbolic
    constant, as a variable has a name (its identifier) and a constant value.

    for example:
        # define PI 3.14
*/

//declare a const variable globally
# define PI 3.14    //symbolic constant
const double pi = 3.14;     //same as # define PI 3.14

int main()
{
//print global const variable
    cout<<"# define PI "<<PI;
    cout<<"\nconst double pi = "<<pi;



//initialize a const variable
    const int num = 10;     //same as -> int const num = 10;
    cout<<"\nconst int num = "<<num;

    /* never do this, show error
    const int num;  // error: const variables must be initialized
    num = 10;   // error: const variables can not be changed

    or,
    const int num = 10;
    num = 30; or num++; or num/=2;
    */


    //another example
    const int i = 10;
    const int j = i + 10;     // works fine


    //another example
    const int maxarray = 255;
    char store_char[maxarray];  // allowed in C++; not allowed in C
}
