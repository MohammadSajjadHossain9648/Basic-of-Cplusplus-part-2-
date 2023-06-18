#include<iostream>
using namespace std;
/*
    note: const pointer cannot change their address but change their value.
*/
/* never write this way
    int* const ptr;
    ptr = &x;
*/
int main()
{
//Similar to a reference, we can declare that the object that a pointer is pointing to is const by placing the
//const keyword to the left of the *:
    int x = 10, y = 20; //can write -> const int x = 10, y = 20;
    cout<<"\n\nThe value of x: "<<x<<" and The value of y: "<<y;

    // use const keyword to make constant pointer and const integer ptr variable point address to the variable x
    const int* ptr = &x;  //here, only change ptr value not address

    // *ptr = 25; // show error cause now ptr cannot changed their value but can change ptr address

    cout<<"\nafter const int* ptr = &x -> The value of *ptr or x: "<<*ptr;

    ptr = &y; // ptr can only change the address
    cout<<"\nafter ptr = &y -> The value of *ptr or y: "<<*ptr;


    //output:
    //    The value of x: 10 and The value of y: 20
    //    after const int* ptr = &x -> The value of *ptr or x: 10
    //    after ptr = &y -> The value of *ptr or y: 20




//Pointers do have a value, so they can be declared as const. To do so, the const keyword is placed to
//the right of the *:
    int x2 = 10, y2 = 20; //never write -> const int x2 = 10, y2 = 20;
    cout<<"The value of x2: "<<x2;

    // use const keyword to make constant pointer and const integer ptr variable point address to the variable x2
    int* const ptr2 = &x2; //here, only change ptr2 value not address

    // ptr2 = &y2; // show error cause now ptr2 cannot changed their address but can change ptr2 value

    *ptr2 = 15; // ptr2 can only change the value
    cout<<"\nafter changing *ptr2 = 15 -> The value of *ptr2 or x2: "<<*ptr2;

    x2 = 25;
    cout<<"\nafter changing x2 = 25 -> The value of *ptr2 or x2: "<<*ptr2;

    /*
    Reading the declaration of ptr2 inside out, we get “ptr2 is a constant pointer to an int.” Thus, we cannot
    modify the value of ptr2 itself. However, since the type that ptr2 is pointing to (what is to the left of the *)
    is not const, we can modify the object that ptr2 is pointing to.
    */

    //output:
    //    The value of x2: 10
    //    after changing *ptr2 = 15 -> The value of *ptr2 or x2: 15
    //    after changing x2 = 25 -> The value of *ptr2 or x2: 25




//Finally, we can declare that both the pointer itself and the object it is pointing to are const:
    int x3 = 10, y3 = 20;
    cout<<"\n\nThe value of x3: "<<x3<<" and The value of y3: "<<y3;

    // use const keyword to make constant pointer and const integer ptr3 variable point address to the variable x3
    const int* const ptr3 = &x3;  //here, only change ptr value not address

    // show error cause now ptr3 cannot changed their value and address both
    // *ptr3 = 25;
    // ptr3 = &y3;
}
