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
int main()
{
//take input as a variable
    int num;
    int *ptr = &num;

    cout<<"enter a number: ";
    cin>>num; //same as cin>>*ptr;

    cout<<"\nvalue of num: "<<num; // -> print num variable address
    cout<<"\nvalue of &num: "<<&num; // -> print num variable value
    cout<<"\nvalue of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

    /* same as above
    int num;
    int *ptr = NULL;
    ptr = &num;

    cout<<"enter a number: ";
    cin>>num; //cin>>*ptr;

    ----------------------------
    int num;
    int *ptr = NULL;

    cout<<"enter a number: ";
    cin>>num; //cin>>*ptr; -> take as an garbage

    ptr = &num;
    */

    /* bad practice not working
    int num;
    int *ptr = NULL;

    cout<<"enter a number: ";
    cin>>*ptr; //cin>>*ptr; -> nothing print

    ptr = &num;
    */


    //output:
    //    enter a number: 20
    //
    //    value of num: 20
    //    value of &num: 0x81fc3ffa34
    //    value of ptr: 0x81fc3ffa34
    //    value of *ptr: 20




//take input as array pointer
    int len;
    cout<<"\n\nenter the length of array: ";
    cin>>len;

    int arr[len];
    int *ptr2 = &arr[0];

    for(int i=0; i<len; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nint ptr[] : ";
    for(auto i=0; i<len; i++)
    {
        cout<<*(ptr2+i)<<" "; //same as cout<<ptr2[i]<<" ";
    }

    /*Array name used as pointer
    int len;
    cout<<"\n\nenter the length of array: ";
    cin>>len;

    int arr[len];

    for(int i=0; i<len; i++)
    {
        //Insert data using pointer notation
        cin>>*(arr+i); //same as, cin>>arr[i];
    }

    cout<<"\nint arr[] : ";
    for(auto i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    */
}
