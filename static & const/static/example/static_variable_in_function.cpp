#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/static-variables-in-c/
                  https://www.geeksforgeeks.org/static-keyword-cpp/
                  https://www.geeksforgeeks.org/memory-layout-of-c-program/
                  https://www.geeksforgeeks.org/what-are-static-functions-in-c/
                  https://dotnettutorials.net/lesson/static-variables-in-cpp
                  https://linuxhint.com/static-variable-cpp/
                  https://www.learncpp.com/cpp-tutorial/static-local-variables/
                  https://www.cs.uaf.edu/2010/spring/cs202/lecture/02_16_static.html
                  https://www.scaler.com/topics/static-variables-in-c/
                  https://www.scaler.com/topics/cpp/static-member-in-cpp/
                  https://www.programiz.com/cpp-programming/storage-class
                  https://www.softwaretestinghelp.com/static-in-cpp/
                  https://www.studytonight.com/cpp/static-keyword.php
                  https://www.javatpoint.com/cpp-static
                  https://www.tutorialspoint.com/static-keyword-in-cplusplus
*/
/*
    Static variables are the variables which once declared, get destroyed only when the program has completed its
    execution. They have the property of retaining their previous scope value if they are already declared once in
    the program. They are different from normal variables because normal variables do not retain their previous value.
    Normal variables get destroyed once they go out of scope. But when static variables are initialized, they get
    destroyed only after the whole program gets executed.
*/
/*
    Consider a scenario where you have two different functions, and you have to separately keep track of the number
    of calls made to these two functions. Using a normal variable to keep the count of these function calls will not
    work since at every function call, the count variables will reinitialize their values. This can be understood
    better by the help of the code given below.
*/
/*
    note: never initialize same static variable name. Static variables are the variables that have the property to
    preserve their value from their previous scope. It means that its value does not get re-initialized every time
    it is declared. It is different from normal variables because normal variables get destroyed as soon as the
    function in which it is declared completes its execution. While the memory of normal variables is allocated
    in the stack segment, the memory of static variables is allocated in the data segment. That is the reason why
    they are able to preserve the value of their previous scope.
*/



//without using static
int fun1()
{
    int count = 0;
    count++;
    return count;
}

//with using static
void fun2()
{
    static int count = 0;
    count++;
    cout<<"\ncount in fun2(): "<<count;
}

int fun3()
{
    static int count2 = 0; //never reuse static variable -> static int count = 0; cause it store in heap memory
    count2++;
    return count2;
}



int main()
{
//here, have to separately keep track of the number of calls made to these two functions(fun1 & fun2).
//using static in function
    //without using static
    cout<<"\n\nwithout using static:\ncount in fun1(): "<<fun1();
    cout<<"\ncount in fun1(): "<<fun1();


    //with using static
    cout<<"\n\nwith using static:";
    fun2();
    fun2();
    fun2();
    fun2();

    /*same as above
    for(int i=0; i<3; i++)
    {
        fun2();
    }
    */


    //same as above fun2()
    cout<<"\n\nwith using static:\ncount in fun3(): "<<fun3();
    cout<<"\ncount in fun3(): "<<fun3();

    /* or write
    int count = fun3();
    cout<<"\ncount in fun3(): "<<count;
    */

    //output:
    //
    //    without using static:
    //    count in fun1(): 1
    //    count in fun1(): 1
    //
    //    with using static:
    //    count in fun2(): 1
    //    count in fun2(): 2
    //    count in fun2(): 3
    //    count in fun2(): 4
    //
    //    with using static:
    //    count in fun3(): 1
    //    count in fun3(): 2
}
