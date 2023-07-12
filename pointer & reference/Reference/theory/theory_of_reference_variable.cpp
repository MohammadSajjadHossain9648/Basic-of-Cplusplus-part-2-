#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/references-in-c/
                  https://www.javatpoint.com/cpp-references
                  https://www.softwaretestinghelp.com/references-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-reference
                  https://www.educative.io/answers/reference-variables-and-memory-address-of-variables-in-cpp
                  https://www.tutorialspoint.com/what-is-a-reference-variable-in-cplusplus#:~:text=Reference%20variable%20is%20an%20alternate,used%20to%20declare%20reference%20variable.
                  https://www.cs.fsu.edu/~myers/c++/notes/references.html
                  https://www.geeksforgeeks.org/when-do-we-pass-arguments-by-reference-or-pointer/
                  https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/
                  https://www.geeksforgeeks.org/pointers-and-references-in-c/?ref=rp
*/
/*
    reference variable is almost same as initialize a pointer.
    Reference variable is an alternate name of already existing variable. It cannot be changed to refer another
    variable and should be initialized at the time of declaration and cannot be NULL. The operator ‘&’ is used
    to declare reference variable.
*/
/*
    what is reference variable?
    A reference variable is one that refers to the address of another variable. It represents the name of another
    variable, location, or value. Once you initialize the variable references, that variable will be referred to
    using the variable name or reference name.
    The variable reference is nothing but an alternate name for the already existing variable.

    The reference operators:
    & is the address-of operator, and can be read simply as "address of"


    for an example:
    int num = 5;
    int &ptr = num; //declare reference variables ptr for num as follows.
    cout<<num; // -> print num variable address
    cout<<ptr; // -> print num variable value

    in example,ptr is now a reference to num. (They are both referring to the SAME storage location in memory).

    what happen in above code?
    when we create int num, a block create for int num with memory address like hexadecimal form(start 0x......)
    in memory and store value 5.
        ---
        |5|
        ---
        num -> address is 0x7fff5fbff8ac

    after create a pointer like int ptr with reference operator(&), it use to store the same value and same address
    of num variable.

    see the model below:
            num                                 ptr
            |                                     |
            |                                     |
            |         -------------------         |
            |-------> | 5(value of num) | <-------|
                      -------------------
                0x7fff5fbff8ac(address of num)
*/
/*
    note and remember:
    1)reference variable use to store the same value and same address of existing variable(see the above model), which
    mean they are both referring to the SAME storage location in memory
    2)A pointer can be declared as void but a reference can never be void.
    for example:
        int a = 10;
        void* aa = &a; // it is valid
        void& ar = a;  // it is not valid
*/
/*
    C++ Reference Applications
    You will use the C++ reference in two different ways in C++ programming. They are as follows:
    1.Reference as a parameter in C++
    2.Reference as a return value in C++


    C++ Reference as Parameter in a Function:
    A function can change the value of a variable if it receives a reference to it. For instance, references are
    used to exchange the following program variables.
    A function may declare a reference variable as arguments. The variable references pass the value. Suppose the
    user has made any changes, it will change the original value of the referenced variable.


    Use the C++ Reference as Return Value in Function:
    The function also returns the reference variable to the assignment expression. When a function returns a
    reference, it implicitly returns a pointer to the value it returns. You can utilize a function on the left side
    of an assignment statement in this manner.
    This is nothing but a function as a reference. While you use the return statement, it will be considered as a
    reference variable only.
*/
/*
    Reference Vs Pointers
    When compared to pointers, references are safer and easier to use.

    We will discuss a few differences between pointers and references:
    1.Unlike pointers, references cannot have a null value. It is mandatory for references to have a value
    assigned to it.
    .References are initialized the moment they are created. Unlike this, pointers can be initialized at any
    point of time and not necessarily during declaration.
    3.Pointers can be reassigned to the values at ease. But with references, we cannot do this. Once a value of
    the variable is assigned, i.e. once an alias of a variable is created, we cannot assign another variable to
    this reference.
    4.We do not have void references. By definition, a reference is an alias for the variable and it is
    initialized during the creation itself. Thus, there is no chance that we will have void reference and later on
    assign a variable with a concrete data type to it. In contrast, we can have void pointers.
*/
/*
    References are less powerful than pointers
    1) Once a reference is created, it cannot be later made to reference another object; it cannot be reset.
    This is often done with pointers.
    2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any
    valid thing.
    3) A reference must be initialized when declared. There is no such restriction with pointers.

    Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List,
    Tree, etc. In Java, references don’t have the above restrictions and can be used to implement all data structures.
    References being more powerful in Java is the main reason Java doesn’t need pointers.



    References are safer and easier to use:
    1) Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist.
    It is still possible to have references that don’t refer to a valid location
    2) Easier to use: References don’t need a dereferencing operator to access the value. They can be used like
    normal variables. ‘&’ operator is needed only at the time of declaration. Also, members of an object reference
    can be accessed with dot operator (‘.’), unlike pointers where arrow operator (->) is needed to access members.

    Together with the above reasons, there are few places like the copy constructor argument where pointer cannot
    be used. Reference must be used to pass the argument in the copy constructor. Similarly, references must be used
    for overloading some operators like ++.
*/
int main()
{
}
