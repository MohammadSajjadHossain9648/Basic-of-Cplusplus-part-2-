#include<iostream>
using namespace std;

// Two simple functions
void fun1() { cout<<"Fun1\n"; }
void fun2() { cout<<"Fun2\n"; }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
    fun();
}

int main()
{
    wrapper(fun1);
    wrapper(fun2);

    //output:
    //    Fun1
    //    Fun2

}
