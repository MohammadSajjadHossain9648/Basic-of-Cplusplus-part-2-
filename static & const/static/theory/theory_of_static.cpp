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
    A static variable is a variable that is declared using the keyword static. The space for the static variable
    is allocated only one time and this is used for the entirety of the program. Once this variable is declared,
    it exists till the program executes.

    A static local variable exists only inside a function where it is declared (similar to a local variable) but
    its lifetime starts when the function is called and ends only when the program ends.

    The main difference between local variable and static variable is that, the value of static variable persists
    the end of the program.
*/
/*
    When static keyword is used, variable or data members or functions can not be modified again. It
    is allocated for the lifetime of program. Static functions can be called directly by using class name.

    Static variables are initialized only once. Compiler persist the variable till the end of the program.
    Static variable can be defined inside or outside the function. They are local to the block. The default
    value of static variable is zero. The static variables are alive till the execution of the program.
*/
/*
    Static Keyword can be used with following:
    1.Static variable in functions
    2.Static Class Objects
    3.Static member Variable in class
    4.Static Methods in class
*/
/*
    Following are some interesting facts about static variables in C.
    1) A static int variable remains in memory while the program is running. A normal or auto variable is destroyed
    when a function call where the variable was declared is over.
    For example, we can use static int to count a number of times a function is called, but an auto variable can’t
    be used for this purpose.
    2) Static variables are allocated memory in data segment, not stack segment. See memory layout of C programs
    for details.
    3) Static global variables and functions are also possible in C/C++. The purpose of these is to limit scope of
    a variable or function to a file. Please refer Static functions in C for more details.
    4) Static variables should not be declared inside structure. The reason is C compiler requires the entire structure
    elements to be placed together (i.e.) memory allocation for structure members should be contiguous. It is possible
    to declare structure inside the function (stack segment) or allocate memory dynamically(heap segment) or it can
    be even global (BSS or data segment). Whatever might be the case, all structure members should reside in the
    same memory segment because the value for the structure element is fetched by counting the offset of the element
    from the beginning address of the structure. Separating out one member alone to data segment defeats the purpose
    of static variable and it is possible to have an entire structure as static.
*/
/*
    note: never initialize same static variable name. Static variables are the variables that have the property to
    preserve their value from their previous scope. It means that its value does not get re-initialized every time
    it is declared. It is different from normal variables because normal variables get destroyed as soon as the
    function in which it is declared completes its execution. While the memory of normal variables is allocated
    in the stack segment, the memory of static variables is allocated in the data segment. That is the reason why
    they are able to preserve the value of their previous scope.
    for an example:
        void fun2()
        {
            static int count = 0;
            count++;
            cout<<"\ncount in fun2(): "<<count;
        }

        int fun3()
        {
            static int count = 0; //use here -> static int count2 = 0;
            count++;
            return count;
        }
*/
int main()
{
}
