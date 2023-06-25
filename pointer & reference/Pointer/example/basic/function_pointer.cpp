#include<iostream>
using namespace std;
/*
    Function Pointer in C++
    As we know that pointers are used to point some variables; similarly, the function pointer is a pointer used to
    point functions. It is basically used to store the address of a function. We can call the function by using the
    function pointer, or we can also pass the pointer to another function as a parameter.

    They are mainly useful for event-driven applications, callbacks, and even for storing the functions in arrays.

    What is the address of a function?
    Computer only understands the low-level language, i.e., binary form. The program we write in C++ is always in
    high-level language, so to convert the program into binary form, we use compiler. Compiler is a program that
    converts source code into an executable file. This executable file gets stored in RAM. The CPU starts the
    execution from the main() method, and it reads the copy in RAM but not the original file.

    All the functions and machine code instructions are data. This data is a bunch of bytes, and all these bytes
    have some address in RAM. The function pointer contains RAM address of the first instruction of a function.

    Syntax for Declaration
    The following is the syntax for the declaration of a function pointer:
        int (*FuncPtr) (int,int);
*/
int add(int num1, int num2)
{
    return num1+num2;
}
void display(int num)
{
    cout<<"\n\nnumber is "<<num;
}
int main()
{
    //functionPointer is a pointer to a function that has two parameters of type int. It is directly
    //initialized to point to the function add:
    int (*functionPointer)(int, int) = add;

    /*The above line is equivalent of following two
    int (*functionPointer)(int, int);  // function pointer declaration
    functionPointer = add; // functionPointer is pointing to the add function
    */

    int result = functionPointer(15,25);
    cout<<"Result of addition: "<<result;

    /* never write above example or any pointer function like below
    int (*functionPointer)(int, int) = add(100,20);
    */
    /* can write above code using &, *
    int (*functionPointer)(int, int) = &add;

    int result = (*functionPointer)(15,25);
    cout<<"Result of addition: "<<result;
    */



    //another example:
    void (*functionPointer2)(int) = display;
    functionPointer2(100);

    /* never write above example
    void (*functionPointer2)(int) = display(100);
    */


    //output:
    //    Result of addition: 40
    //
    //    number is 100
}
