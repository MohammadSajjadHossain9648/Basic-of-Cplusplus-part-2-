#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.
                  https://www.guru99.com/cpp-pointers.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp
                  https://www.scaler.com/topics/cpp/pointers-in-cpp/
                  https://www.softwaretestinghelp.com/pointers-in-cpp/
                  https://www.javatpoint.com/cpp-pointers
                  https://cplusplus.com/doc/tutorial/pointers/
                  https://www.programiz.com/cpp-programming/pointers
                  https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
*/
/*
    What is Memory Management?
    Memory management is a process of managing computer memory, assigning the memory space to the programs to
    improve the overall system performance.

    Why is memory management required?
    As we know that arrays store the homogeneous data, so most of the time, memory is allocated to the array
    at the declaration time. Sometimes the situation arises when the exact memory is not determined until runtime.
    To avoid such a situation, we declare an array with a maximum size, but some memory will be unused. To avoid
    the wastage of memory, we use the new operator to allocate the memory dynamically at the run time.

    Memory Management Operators
    In C language, we use the malloc() or calloc() functions to allocate the memory dynamically at run time, and
    free() function is used to deallocate the dynamically allocated memory. C++ also supports these functions,
    but C++ also defines unary operators such as new and delete to perform the same tasks, i.e., allocating and
    freeing the memory.

    New operator
    A new operator is used to create the object while a delete operator is used to delete the object. When the object
    is created by using the new operator, then the object will exist until we explicitly use the delete operator
    to delete the object. Therefore, we can say that the lifetime of the object is not related to the block
    structure of the program.

    Syntax:
    pointer_variable = new data-type
    int *p = new int;
*/
/*
    malloc() vs new in C++:
    Both the malloc() and new in C++ are used for the same purpose. They are used for allocating memory at the
    runtime. But, malloc() and new have different syntax. The main difference between the malloc() and new is
    that the new is an operator while malloc() is a standard library function that is predefined in a stdlib
    header file.
*/
/*
    Advantages of the new operator

    The following are the advantages of the new operator over malloc() function:
    1.It does not use the sizeof() operator as it automatically computes the size of the data object.
    2.It automatically returns the correct data type pointer, so it does not need to use the typecasting.
    3.Like other operators, the new and delete operator can also be overloaded.
    4.It also allows you to initialize the data object while creating the memory space for the object.
*/
/*
    Differences between the malloc() and new:
    malloc() vs new in C++
    1.The new operator constructs an object, i.e., it calls the constructor to initialize an object while malloc()
    function does not call the constructor. The new operator invokes the constructor, and the delete operator invokes
    the destructor to destroy the object. This is the biggest difference between the malloc() and new.
    2.The new is an operator, while malloc() is a predefined function in the stdlib header file.
    3.The operator new can be overloaded while the malloc() function cannot be overloaded.
    4.If the sufficient memory is not available in a heap, then the new operator will throw an exception while the
    malloc() function returns a NULL pointer.
    5.In the new operator, we need to specify the number of objects to be allocated while in malloc() function,
    we need to specify the number of bytes to be allocated.
    6.In the case of a new operator, we have to use the delete operator to deallocate the memory. But in the case of
    malloc() function, we have to use the free() function to deallocate the memory.
*/
/*
    free() function which same as delete
    The free() function is used in C++ to de-allocate the memory dynamically. It is basically a library function
    used in C++, and it is defined in stdlib.h header file. This library function is used when the pointers either
    pointing to the memory allocated using malloc() function or Null pointer.

    Syntax of free() function
    Suppose we have declared a pointer 'ptr', and now, we want to de-allocate its memory:
        free(ptr);

    The above syntax would de-allocate the memory of the pointer variable 'ptr'.

    free() parameters:
    In the above syntax, ptr is a parameter inside the free() function. The ptr is a pointer pointing to the
    memory block allocated using malloc(), calloc() or realloc function. This pointer can also be null or a
    pointer allocated using malloc but not pointing to any other memory block.

    1.If the pointer is null, then the free() function will not do anything.
    2.If the pointer is allocated using malloc, calloc, or realloc, but not pointing to any memory block then this
    function will cause undefined behavior.

    free() Return Value: The free() function does not return any value. Its main function is to free the memory.
*/
/*
    Differences between delete and free()
    The following are the differences between delete and free() in C++ are:

    1.The delete is an operator that de-allocates the memory dynamically while the free() is a function that destroys
    the memory at the runtime.
    2.The delete operator is used to delete the pointer, which is either allocated using new operator or a NULL pointer,
    whereas the free() function is used to delete the pointer that is either allocated using malloc(), calloc() or
    realloc() function or NULL pointer.
    3.When the delete operator destroys the allocated memory, then it calls the destructor of the class in C++, whereas
    the free() function does not call the destructor; it only frees the memory from the heap.
    4.The delete() operator is faster than the free() function.
*/
int main()
{
}
