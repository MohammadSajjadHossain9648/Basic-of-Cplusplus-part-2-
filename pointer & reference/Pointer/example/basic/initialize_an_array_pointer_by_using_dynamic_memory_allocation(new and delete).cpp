#include<bits/stdc++.h>
using namespace std;
int main()
{
//initialize a pointer with array
    int num[] = {10,20,30,40,50};
    int *ptr = new int; //int *ptr = new int(num); or int *ptr = &num; -> show error
    ptr = num;

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
        cout<<num[i]<<"  "; //same as, cout<<*(num+i)<<"  ";
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
        cout<<*(ptr+i)<<"  "; //same as, cout<<ptr[i]<<"  ";

        //and also same as above
        //cout<<*ptr;
        //ptr++;
        //can write above two lines in one line
        //cout<<*ptr++<<" ";
    }



    // delete ptr / deallocate the memory
    delete[] ptr;  //same as free(ptr);

    cout<<"\n\nafter delete ptr:\nown address of &ptr: "<<&ptr; // -> print own ptr variable address
    cout<<"\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

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
    //
    //    address of int num[]: 0xa3d5bffb40  0xa3d5bffb54  0xa3d5bffb68  0xa3d5bffb7c  0xa3d5bffb90
    //    int num[]: 10  20  30  40  50
    //    address of ptr[]: 0xa3d5bffb40  0xa3d5bffb44  0xa3d5bffb48  0xa3d5bffb4c  0xa3d5bffb50
    //    ptr[]: 10  20  30  40  50
    //
    //    after delete ptr:
    //    own address of &ptr: 0xa3d5bffb38
    //    address of ptr: 0xa3d5bffb40
    //    value of *ptr: 10
    //
    //    after changing value of num:
    //    value of ptr: 0xa3d5bffb44
    //    value of ptr[1]: 60
    //
    //    after changing num value by pointer:
    //    value of ptr: 0xa3d5bffb44
    //    value of ptr[1]: 20





//can print a reverse array
    int num2[] = {10,20,30,40,50};
    int len2 = sizeof(num2)/sizeof(int);

    // let us have address of the last element in pointer.
    int *ptr2 = new int;
    ptr2 = &num2[len2-1];

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
    int *ptr2 = new int;
    ptr2 = &num2[0]; //int *ptr2 = &num2; -> show error

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
    int * p = new int;
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

    cout<<"\n\n\nint numbers[]: ";
    for(int n=0; n<5; n++)
        cout<<numbers[n]<<" ";


    //output:
    //    int numbers[]: 10 20 30 40 50





//initialize an array pointer
//pointer array(1D array)
//can declare the pointer size which is known pointer array
    int num3[] = {10,20,30,40,50};
    int *ptr3 = new int[5];

    for(int i=0; i<5; i++)
    {
        *(ptr3+i) = num3[i];
    }

    //print
    cout<<"\n\n\naddress of num3[]: ";
    for(int i=0; i<5; i++)
    {
        cout<<&num3+i<<"  ";
    }

    cout<<"\nnum3[]: ";
    for(int i=0; i<5; i++)
    {
        cout<<num3[i]<<"  ";
    }

    cout<<"\n\naddress of own ptr3[]: ";
    for(int i=0; i<5; i++)
    {
        cout<<(ptr3+i)<<"  ";
    }

    cout<<"\nptr3[]: ";
    for(int i=0; i<5; i++)
    {
        cout<<*(ptr3+i)<<"  "; //same as, cout<<*ptr3[i]<<"  ";
    }


    // ptr3 memory is released
    delete[] ptr3;

    //output:
    //    address of num3[]: 0xa81f9ff720  0xa81f9ff734  0xa81f9ff748  0xa81f9ff75c  0xa81f9ff770
    //    num3[]: 10  20  30  40  50
    //
    //    address of own ptr3[]: 0x28f26906670  0x28f26906674  0x28f26906678  0x28f2690667c  0x28f26906680
    //    ptr3[]: 10  20  30  40  50




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
