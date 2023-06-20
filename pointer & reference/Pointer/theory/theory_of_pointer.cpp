#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.
                  https://www.guru99.com/cpp-pointers.html
                  https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235645/offering/3168908
                  https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235645/offering/3168907
                  https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp
                  https://www.scaler.com/topics/cpp/pointers-in-cpp/
                  https://www.softwaretestinghelp.com/pointers-in-cpp/
                  https://www.javatpoint.com/cpp-pointers
                  https://cplusplus.com/doc/tutorial/pointers/
                  https://www.programiz.com/cpp-programming/pointers
                  https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
*/
/*
    what is pointer?
    pointers are variables that store the memory addresses of other variables.
    Like If we have a variable var in our program, &var will give us its address in the memory.

    The reference and dereference operators are thus complementary:
    & is the address-of operator, and can be read simply as "address of"
    * is the dereference operator, and can be read as "value pointed to by"

    An interesting property of pointers is that they can be used to access the variable they point to directly.
    This is done by preceding the pointer name with the dereference operator (*). The operator itself can be read
    as "value pointed to by".

    for an example:
    int num = 5;
    int *ptr = &num; //declare reference variables ptr for num as follows.
    cout<<ptr; // -> print num variable address
    cout<<*ptr; // -> print num variable value

    what happen in above code?
    when we create int num, a block create for int num with memory address like hexadecimal form(start 0x......)
    in memory and store value 5.
        ---
        |5|
        ---
        num -> address is 0x7fff5fbff8ac

    after create a pointer like int ptr with Dereference operator(*), it use to store the address of num variable
    with ampersand(&) sign.

    see the model below:
        num                                         ptr
        ---                                -------------------------
        |5|                           |--> |0x7fff5fbff8ac(or, &num)|
        ---                           |    -------------------------
   0x7fff5fbff8ac(address of num) -----    0x7ffc1e98dfa4(address of ptr)

*/
/*
    Dereference Operator(*) in Pointer
    As you understood, the pointer stores the address and not the data, but how can you gain access to the data
    then? You can do it with the use of a dereference operator *. It provides you access to the data that is stored
    at the memory address.

    Pointers Example:
    int num = 5;
    int *ptr = &num; //declare reference variables ptr for num as follows.
    cout<<"value of ptr = "<<ptr; -> print num variable address
    cout<<"value of *ptr = "<<*ptr; -> print num variable value

    When you use the dereference operator with ptr, it will point to the memory address of variable num,
    i.e. in hexa form: 0x7fff5fbff8ac, which is also its own(ptr) value. Then, it will point to the value
    stored at the memory address, i.e. 5.

    see the model below:
        num                                         ptr
        ---                                -------------------------
        |5|                           |--> |0x7fff5fbff8ac(or,&num)|
        ---                           |    -------------------------
   0x7fff5fbff8ac(address of num) -----    0x7ffc1e98dfa4(address of ptr)
*/
/*
    Pointers to pointers
    C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other
    pointers). The syntax simply requires an asterisk (*) for each level of indirection in the declaration
    of the pointer:

    like an example:
    char a;
    char * b;
    char ** c;
    a = 'z';
    b = &a;
    c = &b;

    This, assuming the randomly chosen memory locations for each variable of 0x7ff7230, 0x7ff8092, and 0x7ff10502,
    could be represented as:
    With the value of each variable represented inside its corresponding cell, and their respective addresses
    in memory represented by the value under them.

    The new thing in this example is variable c, which is a pointer to a pointer, and can be used in three different
    levels of indirection, each one of them would correspond to a different value:

    c is of type char** and a value of 0x7ff8092
    *c is of type char* and a value of 0x7ff7230
    **c is of type char and a value of 'z'

    see the model below:
        a                      b                     c
       ---                 -----------          -----------
       |z|        |----->  |0x7ff7230|  |-----> |0x7ff8092|
       ---        |        -----------  |       -----------
    0x7ff7230------         0x7ff8092----        0x7ff10502
*/
/*
    References vs Pointers
    References are often confused with pointers but three major differences between references and pointers are −
    1.You cannot have NULL references. You must always be able to assume that a reference is connected to a
    legitimate piece of storage.
    2.Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers
    can be pointed to another object at any time.
    3.A reference must be initialized when it is created. Pointers can be initialized at any time.

    like an example:
    int num = 5;
    int *ptr = &num; //declare reference variables ptr for num as follows.
    cout<<"value of num: "<<num; -> print 5
    cout<<"value of num references: "<<ptr; -> print 5
*/
/*
    References and Pointers
    There are 3 ways to pass C++ arguments to a function:

    Call-By-Value
    Call-By-Reference with a Pointer Argument
    Call-By-Reference with a Reference Argument
*/
/*
    Pointer Arithmetic
    There are some arithmetic operations that you can perform on a pointer in C++ because the pointer stores an
    address which is a numeric value. And the arithmetic operators are:
        Increment Operator (++)
        Decrement Operator (--)
        Addition (+)
        Subtraction (-)

    Increment Operator: When you increment a pointer, the size of its type increments its address. For example,
    for incrementing an integer pointer whose address is 450, after increment, it will be 454 because the int type
    size is 4 bytes.

    Decrement Operator: When you decrement the pointer, its address will be decremented by the size of its type.

    Both increment and decrement operations on a pointer are used to traverse through the array because, on increment,
    the pointer will point to the following memory address of the next element. On decrement, it will point to the
    previous memory address.

    Addition: When you perform an addition operation to the pointer ptr by 1, i.e. ptr+1, then it will point to the
    next memory address. Similarly, if you add 3 to ptr, then it will point to the address that is three times the
    size of the type of pointer, 3* (size of) type.

    Subtraction: When you subtract on a pointer, it will decrease the address by n* (size of) type.

    Pointer Arithmetic:
    There are four arithmetic operators that can be used on pointers: ++, --, +, -

    *p++   // same as *(p++): increment pointer, and dereference unincremented address
    *++p   // same as *(++p): increment pointer, and dereference incremented address
    ++*p   // same as ++(*p): dereference pointer, and increment the value it points to
    (*p)++ // dereference pointer, and post-increment the value it points to


    A typical -but not so simple- statement involving these operators is:
    *p++ = *q++;

    Because ++ has a higher precedence than *, both p and q are incremented, but because both increment operators(++)
    are used as postfix and not prefix, the value assigned to *p is *q before both p and q are incremented. And then
    both are incremented. It would be roughly equivalent to:

    *p = *q;
    ++p;
    ++q;

    Like always, parentheses reduce confusion by adding legibility to expressions.
*/
/*
    Using Pointers to Access Elements of the Array
    In an array, the name is referred to as the address of array inside the memory and that is why while assigning
    the address of an array to a pointer we don’t use ampersand sign &, because the array name denotes the address
    of the first element in the array.

    So, to access the elements of the array, you can use a dereference operator with the array name.

    For example:
    int num[] = {10,20,30};
    int *ptr;

    ptr = num;
    cout<<"\nvalue of number  = "<<(*num); //10
    cout<<"\nvalue of number  = "<<(*num + 1); //20
    cout<<"\nvalue of number  = "<<(*num + 2); //30

    Here the array name is ‘num’ having three elements inside it. With the help of the array name, you print each
    element of the array because, as you know, ptr+1 will point to the next memory address. Similarly, num+1 will
    point to the next address, but you use the dereference operator along with it, that is why the value gets
    printed for that address. The same goes for num+2.

    You can also traverse through array elements with the help of the increment operator.

    //or can print using for loop
    for(int i=0; i<3; i++)
    {
        cout<<"value of *ptr = "<<*ptr;
        *ptr++;
    }

    In this example, you will assign the array num to the pointer ptr, and with the help of a for loop, you then
    traverse the elements from 0 to 4. Inside the for loop, the values stored at the address of the pointer ptr
    will be printed one by one after each iteration. The ptr++ will help to move the pointer to the next position
    after each iteration.
*/
/*
    Passing Pointers to Functions
    In C++, you can also pass pointers as arguments for the functions. When you pass pointers to the function,
    then the address of the actual argument is copied to the formal argument of the called function. And that is
    why it reflects changes in the original variables.

    Have a look at an example:
    int swap(int *ptr1, int *ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    int main()
    {
        int n1=5, n2=10;
        cout<<"before swap: n1 = "<<n1<<" and n2 = "<<n2;       //5  10
        swap(&n1, &n2); //here, sent the address of n1 and n2
        cout<<"before swap: n1 = "<<n1<<" and n2 = "<<n2;       //10  5
    }

    In this example, you pass the address of two variables n1 and n2, to the swap function. So this function takes
    two arguments as pointers, i.e. ptr1 and ptr2. It took an integer variable temp inside this function and assigned
    it the value of *ptr1, then you assigned the value of *ptr2 to *ptr1. Now temp has the value of *ptr1, which you
    give to *ptr2. So that is how the values are now swapped.

    Since it now swapped the values with pointers, it should also reflect this swapped value outside the function.
*/
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
/*
    Invalid pointers and null pointers
    In principle, pointers are meant to point to valid addresses, such as the address of a variable or the address
    of an element in an array. But pointers can actually point to any address, including addresses that do not refer
    to any valid element. Typical examples of this are uninitialized pointers and pointers to nonexistent elements
    of an array:

    int * p;               // uninitialized pointer (local variable)
    int myarray[10];
    int * q = myarray+20;  // element out of bounds


    Neither p nor q point to addresses known to contain a value, but none of the above statements causes an error.
    In C++, pointers are allowed to take any address value, no matter whether there actually is something at that
    address or not. What can cause an error is to dereference such a pointer (i.e., actually accessing the value they
    point to). Accessing such a pointer causes undefined behavior, ranging from an error during runtime to accessing
    some random value.

    But, sometimes, a pointer really needs to explicitly point to nowhere, and not just an invalid address. For such
    cases, there exists a special value that any pointer type can take: the null pointer value. This value can be
    expressed in C++ in two ways: either with an integer value of zero, or with the nullptr keyword:

    int * p = 0;
    int * q = nullptr;

    Here, both p and q are null pointers, meaning that they explicitly point to nowhere, and they both actually
    compare equal: all null pointers compare equal to other null pointers. It is also quite usual to see the defined
    constant NULL be used in older code to refer to the null pointer value:

    int * r = NULL;

    NULL is defined in several headers of the standard library, and is defined as an alias of some null pointer
    constant value (such as 0 or nullptr).

    Do not confuse null pointers with void pointers! A null pointer is a value that any pointer can take to represent
    that it is pointing to "nowhere", while a void pointer is a type of pointer that can point to somewhere without a
    specific type. One refers to the value stored in the pointer, and the other to the type of data it points to.
*/
/*
    C++ Memory Management: new and delete
    In this tutorial, we will learn to manage memory effectively in C++ using new and delete operations with the
    help of examples.
    C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory
    allocation.
    In other programming languages such as Java and Python, the compiler automatically manages the memories
    allocated to variables. But this is not the case in C++.
    In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.
    We can allocate and then deallocate memory dynamically using the new and delete operators respectively.
*/
/*  Pointers_and_const
    Pointers can be used to access a variable by its address, and this access may include modifying the value pointed.
    But it is also possible to declare pointers that can access the pointed value to read it, but not to modify it.
    For this, it is enough with qualifying the type pointed to by the pointer as const. For example:

    int x;
    int y = 10;
    const int * p = &y;
    x = *p;          // ok: reading p
    *p = x;          // error: modifying p, which is const-qualified

    Here p points to a variable, but points to it in a const-qualified manner, meaning that it can read the value
    pointed, but it cannot modify it. Note also, that the expression &y is of type int*, but this is assigned to
    a pointer of type const int*. This is allowed: a pointer to non-const can be implicitly converted to a pointer
    to const. But not the other way around! As a safety feature, pointers to const are not implicitly convertible
    to pointers to non-const.

    One of the use cases of pointers to const elements is as function parameters: a function that takes a pointer
    to non-const as parameter can modify the value passed as argument, while a function that takes a pointer to
    const as parameter cannot.
*/
/*
    Advantages of Pointers
    1.Pointers reduce the code and improve performance. They are used to retrieve strings, trees, arrays, structures,
    and functions.
    2.Pointers allow us to return multiple values from functions.
    3.In addition to this, pointers allow us to access a memory location in the computer’s memory.
*/

int main()
{
    /*
    Why are References Less Powerful Than Pointers?
    1.References cannot be NULL, unlike pointers which can be NULL to denote that they are not pointing to anything.
    2.References cannot be reassigned to another variable after they have been created.
    3.Referenced must be initialized at the time of declaration.

    Owing to such limitations, references are not as powerful as pointers. This is why pointers are preferred in the
    implementation of many popular data structures like Linked List, Tree, etc. JAVA, on the other hand, uses
    references to implement these data structures because it doesn't have such restrictions on references. This is
    why JAVA doesn't use pointers.
    */
    /*
    References are Safer and Easier to Use
    1.Since references are initialized at the time of declaration, we don't need to worry about situations like wild
    pointers (uninitialized pointers which point to arbitrary memory locations).
    2.References don't have to be dereferenced like pointers and can be used like normal variables (as an alias for
    some other variable).
    3.It is necessary to pass objects as a reference in a copy constructor. Otherwise, if it's passed by value, the
    copy constructor would call itself to create a copy of the object which in turn would call another copy constructor
    and this loop would go on until the compiler runs out of memory.
    4.While overloading operators like ++, references are used to ensure that the original variable is being returned
    and not a new copy.
    */
}
