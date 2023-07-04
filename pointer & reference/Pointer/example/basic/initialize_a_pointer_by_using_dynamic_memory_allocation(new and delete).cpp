#include<bits/stdc++.h>
using namespace std;
int main()
{
//initialize a pointer by using the new keyword(dynamically allocate memory)
    int num = 5;

    // dynamically allocate memory using the new keyword
    int *ptr = new int(num);

    cout<<"address of num: "<<num; // -> print num variable value
    cout<<"\nvalue of &num: "<<&num; // -> print num variable address

    cout<<"\nown address of &ptr: "<<&ptr; // -> print own ptr variable address
    cout<<"\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value


    // delete ptr / deallocate the memory
    delete ptr; //same as free(ptr);

    cout<<"\n\nafter delete ptr:\nown address of &ptr: "<<&ptr; // -> print own ptr variable address
    cout<<"\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

    /* can write line 21 using NULL pointer in line 38
    int *ptr = new int;
    ptr = &num; //it stores num address

    or, can write
    int *ptr = new int;
    *ptr = num; //it stores num value

    ------------------------------------------------------
    or using malloc() which is same as new
    int *ptr = (int*) malloc(sizeof(int));
    ptr = &num; //it stores num address

    or, can write
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = num; //it stores num value
    */

    /* bad practices ->never initialize this way

    // Wrong! and also show error
    // ptr is an address but num is not
    int num, *ptr;
    ptr = num;

    // Wrong!
    // &num is an address
    // *ptr is the value stored in &num
    int num, *ptr;
    *ptr = &num;

    // Correct!
    // ptr is an address and so is &num
    int num, *ptr;
    ptr = &num;

    // Correct!
    // both *ptr and num are values
    int num, *ptr;
    *ptr = num;
    */




// change the value with using pointer or without
// always remember that memory location is always remain same
    //without using pointer(change value at num variable)
    num = 10;
    *ptr = num;
    cout<<"\n\nafter changing value of num:\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

    //with using pointer(change value at address ptr)
    *ptr = 15; //ptr = 15; or &ptr = 15; -> it show error
    cout<<"\n\nafter changing num value by pointer:\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value


    //output:
    //    address of num: 5
    //    value of &num: 0x2c73ff854
    //    own address of &ptr: 0x2c73ff848
    //    address of ptr: 0x1ba5dc06580
    //    value of *ptr: 5
    //
    //    after delete ptr:
    //    own address of &ptr: 0x2c73ff848
    //    address of ptr: 0x1ba5dc06580
    //    value of *ptr: 5
    //
    //    after changing value of num:
    //    address of ptr: 0x1ba5dc06580
    //    value of *ptr: 10
    //
    //    after changing num value by pointer:
    //    address of ptr: 0x1ba5dc06580
    //    value of *ptr: 15





//can call pointer of all data types
    int    *i;    // a pointer to integer
    double *d;    // a pointer to double
    float  *f;    // a pointer to float
    char   *ch;     // a pointer to a character



//Pointers of Variables
    int *p; //same as int * p or int* p;
}
