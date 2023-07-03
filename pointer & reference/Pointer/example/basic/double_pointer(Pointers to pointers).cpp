#include<iostream>
using namespace std;
/*
    Pointers to pointers(double pointer)
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
int main()
{
    int a = 10;
    int * b = &a;
    int ** c = &b;

    cout<<"value of int a = "<<a;
    cout<<"\naddress of int a = "<<&a;

    cout<<"\n\npointer value of int *b = "<<*b; //store value in b
    cout<<"\npointer address of int b = "<<b; //store address value in b
    cout<<"\nown pointer address of int &b = "<<&b;

    cout<<"\n\ndouble pointer value of int **c = "<<**c; //store value in a
    cout<<"\ndouble pointer address of int *c = "<<*c; //store address value in b
    cout<<"\nown double pointer address of int &c = "<<&c;
    cout<<"\nown b pointer address of int &(*c) = "<<&(*c); //same as *(&c)


    //output:
    //    value of int a = 10
    //    address of int a = 0xb23f3ffb6c
    //
    //    pointer value of int *b = 10
    //    pointer address of int b = 0xb23f3ffb6c
    //    own pointer address of int &b = 0xb23f3ffb60
    //
    //    double pointer value of int **c = 10
    //    double pointer address of int *c = 0xb23f3ffb6c
    //    own double pointer address of int &c = 0xb23f3ffb58
    //    own b pointer address of int &(*c) = 0xb23f3ffb60




//increment or decrement operator in double pointer of int
    int x2 = 10;
    int *pt3 = &x2; //never write int *pt3 = x++;, cause arr store in symbol table which never change
    int **pt4 = &pt3;
    (**pt4)++;// never write pt3++ or **pt3++; -> print garbage like 10+1+4
    cout<<"\n\n\nvalue of *pt4 is "<<**pt4;
    cout<<"\nvalue of x2 is "<<x2;

    //output:
    //    value of *pt4 is 11
    //    value of x2 is 11




// another example of double pointer
    int first = 100;
    int *p = &first;
    int **q = &p;

    int second = ++(**q);
    int *r = *q; //it point the first value address which store in p and never write this -> int *r = *p;
    ++(*r);

    cout<<"\n\nfirst = "<<first<<"\nsecond = "<<second;
}
