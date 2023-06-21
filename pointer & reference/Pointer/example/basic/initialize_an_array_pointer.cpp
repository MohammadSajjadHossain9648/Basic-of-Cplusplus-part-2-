#include<iostream>
#include<iomanip>
using namespace std;
/* always remember
    arr[i] = i[arr] = *(arr+i) = *(i+arr)  -> print array/pointer all values
    &arr[0] = &a = a -> print array first memory block address
*/
int main()
{
//initialize a pointer with array
    int num[] = {10,20,30,40,50};
    int *ptr = &num[0]; //same as, int *ptr = num; or int *ptr = num+0; but int *ptr = &num; -> show error

    //count size
    cout<<"\n\nsize of num: "<<sizeof(num); // only create a block of 4 bytes * 5 for memory allocation
    cout<<"\nsize of ptr: "<<sizeof(ptr); //pointer store value and address both with (4+4) byte = 8 byte

    //print pointer
    int len = sizeof(num)/sizeof(int);
    cout<<"\naddress of int num[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<&num+i<<"  "; //same as cout<<num+i<<"  ";
    }
    cout<<"\nint num[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<num[i]<<"  "; //same as, cout<<*(num+i)<<"  "; or cout<<i[num]<<"  ";
    }

    cout<<"\naddress of ptr[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<ptr+i<<"  ";

        //and also same as above
        //cout<<ptr;
        //ptr++;
        //can write above two lines in one line
        //cout<<ptr++<<" ";
    }
    cout<<"\nptr[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<*(ptr+i)<<"  "; //same as, cout<<*(i+ptr)<<"  "; or cout<<ptr[i]<<"  "; or cout<<i[ptr]<<"  ";

        //and also same as above
        //cout<<*ptr;
        //ptr++;
        //can write above two lines in one line
        //cout<<*ptr++<<" ";
    }

    /*or print using without for loop
    cout<<"\naddress of int num[]: "<<&num[0]<<"  "<<&num[1]<<"  "<<&num[2]<<"  "<<&num[3]<<"  "<<&num[4];
    cout<<"\nint num[]: "<<num[0]<<"  "<<num[1]<<"  "<<num[2]<<"  "<<num[3]<<"  "<<num[4];
    cout<<"\naddress of ptr+i: "<<ptr+0<<"  "<<ptr+1<<"  "<<ptr+2<<"  "<<ptr+3<<"  "<<ptr+4;
    cout<<"\nptr[]: "<<*(ptr+0)<<"  "<<*(ptr+1)<<"  "<<*(ptr+2)<<"  "<<*(ptr+3)<<"  "<<*(ptr+4);

    //show error for address print
    cout<<"\naddress of int num[]: "<<*ptr[0]<<"  "<<*ptr[1]<<"  "<<*ptr[2]<<"  "<<*ptr[3]<<"  "<<*ptr[4];
    */

    /* can write above code
    int num[] = {10,20,30,40,50};
    int *ptr = NULL; //same as int *ptr = &num[0];
    ptr = num; //same as, ptr = &num[0]

    ---------------------------------------------------
    for(int i=0;i<len;i++) //can reverse store by this ->for(int i=len-1;i>=0;i--)
    {
        ptr[i] = &num[i];
    }
    */



// change any index value with using pointer or without
// always remember that memory location is always remain same
    //without using pointer(change value at num variable)
    num[1] = 60;
    cout<<"\n\nafter changing value of num:\nvalue of ptr: "<<ptr+1; // -> print num variable address
    cout<<"\nvalue of ptr[1]: "<<ptr[1]; // -> print num variable value


    //with using pointer(change value at address ptr)
    ptr[1] = 20; //ptr = 15; or &ptr = 15; -> it show error
    cout<<"\n\nafter changing num value by pointer:\nvalue of ptr: "<<ptr+1; // -> print num variable address
    cout<<"\nvalue of ptr[1]: "<<ptr[1]; // -> print num variable value


    //output:
    //    size of num: 20
    //    size of ptr: 8
    //
    //    address of int num[]: 0x50e1ffae0  0x50e1ffae4  0x50e1ffae8  0x50e1ffaec  0x50e1ffaf0
    //    int num[]: 10  20  30  40  50
    //    address of ptr+i: 0x50e1ffae0  0x50e1ffae4  0x50e1ffae8  0x50e1ffaec  0x50e1ffaf0
    //    ptr[i]: 10  20  30  40  50
    //
    //    after changing value of num:
    //    value of ptr: 0x50e1ffae4
    //    value of ptr[1]: 60
    //
    //    after changing num value by pointer:
    //    value of ptr: 0x50e1ffae4
    //    value of ptr[1]: 20





//increment or decrement operator in pointer
    int arr[] = {10,20,30,40,50};
    int *p1 = &arr[0]; //same as int *p1 = arr, but never write int *p1 = arr++;, cause arr store in symbol table which never change
    *p1++;//same as p1++; and if write (*p1)++; -> print 10+1
    cout<<"\n\n\nvalue of *p1 is "<<*p1;

    //output: value of *p1 is 20






//can print a reverse array
    int num2[] = {10,20,30,40,50};
    int len2 = sizeof(num2)/sizeof(int);

    // let us have address of the last element in pointer.
    int *ptr2 = &num2[len2-1];

    cout<<"\n\nreverse of num2 or ptr2 array:\nptr2[]: ";
    for(int i=0; i<len2; i++)
    {
        cout<<*ptr2<<"  ";
        ptr2--;
        /*can write in one line
        cout<<*ptr--<<" ";
        */
    }

    /*
    int num2[] = {10,20,30,40,50};
    int len2 = sizeof(num2)/sizeof(int);
    int *ptr2 = &num2[0]; //int *ptr2 = &num2; -> show error

    cout<<"\n\nreverse of num2 or ptr2 array:\nptr2[]: ";
    for(int i=len2-1; i>=0; i--)
    {
        cout<<ptr2[i]<<"  "; //same as, cout<<*(ptr2+i)<<"  ";
    }
    */

    //output:
    //    reverse of num2 or ptr2 array:
    //    ptr2[]: 50  40  30  20  10


    //another example:
    int numbers[5];
    int * p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p++;  //same as, p = &numbers[2]; or p = numbers + 2; or p = numbers;
    *p = 30;
    p++;
    *p = 40;
    p = numbers;
    *(p+4) = 50;

    cout<<"\n\nint numbers[]: ";
    for(int n=0; n<5; n++)
        cout<<numbers[n]<<" ";


    //output:
    //    int numbers[]: 10 20 30 40 50





//initialize an array pointer
//pointer array(1D array)
//can declare the pointer size which is known pointer array
    int num3[] = {10,20,30,40,50};
    int *ptr3[3];

    int len3 = sizeof(num3)/sizeof(int);
    int len4 = ( sizeof(ptr3)/sizeof(int) )/2; //pointer: one is address and one is for value so we need divide by 2

    for(int i=0; i<len4; i++)
    {
        ptr3[i] = &num3[i];
    }

    //print
    cout<<"\n\naddress of num3[]: ";
    for(int i=0; i<len3; i++)
    {
        cout<<&num3+i<<"  ";
    }

    cout<<"\nnum3[]: ";
    for(int i=0; i<len3; i++)
    {
        cout<<num3[i]<<"  ";
    }

    cout<<"\n\naddress of ptr3[]: ";
    for(int i=0; i<len4; i++)
    {
        cout<<*(ptr3+i)<<"  ";
    }

    cout<<"\nptr3[]: ";
    for(int i=0; i<len4; i++)
    {
        cout<<*(*(ptr3+i))<<"  "; //same as, cout<<*ptr3[i]<<"  ";
    }

    //output:
    //    address of num3[]: 0x3ed1dff630  0x3ed1dff644  0x3ed1dff658  0x3ed1dff66c  0x3ed1dff680
    //    num3[]: 10  20  30  40  50
    //
    //    address of ptr3[]: 0x3ed1dff630  0x3ed1dff634  0x3ed1dff638
    //    ptr3[]: 10  20  30




    //another example:
    float arr2[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr4 = &arr2[0];
    float *ptr5 = ptr4 + 3;
    cout<<*ptr5<<"  ";
    cout<< ptr5 - ptr4;

    //output:  90.5  3

//pointer array(2D array)
//can declare the pointer size which is known pointer array
    int num4[][3] = { { 16, 18, 20 }, { 25, 26, 27 } };

    /*
    pointer notation        array notation        value
      *(*(num+0))              num[0][0]            16
      *(*(num+1))              num[0][1]            18
      *(*(num+2))              num[0][2]            20
      *(*(num+1)+0)            num[1][0]            25
      *(*(num+1)+1)            num[1][1]            26
      *(*(num+1)+2)            num[1][2]            27
    */


}
