#include<iostream>
using namespace std;
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
