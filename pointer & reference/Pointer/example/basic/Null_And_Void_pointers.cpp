#include<iostream>
using namespace std;
//here, void* data can take any datatype like int, char, float etc
//and psize can compare the datatype like char is 1 byte, int 4 byte etc.
void increase(void* data, int psize)
{
    if( psize == sizeof(char) )
    {
        char* pchar;
        pchar=(char*)data;
        (*pchar)++;
    }
    else if( psize == sizeof(int) )
    {
        int* pint;
        pint=(int*)data;
        (*pint)++;
    }
}

int main()
{
    int intvar = 10;
    char c = 'A';
    void* vptr;

    int* myptr = NULL;

    cout<<"NULL pointer value :"<<myptr;

    vptr = &c;
    char* charptr;
    charptr = (char*)vptr;
    cout<<"\nVoid pointer vptr points to:"<<*charptr;

    int* intptr;
    vptr = &intvar;
    intptr = (int*)vptr;
    cout<<"\nVoid pointer vptr points to:"<<*intptr;

    //output:
    //    NULL pointer value :0
    //    Void pointer vptr points to:A
    //    Void pointer vptr points to:10



    //another example using void pointer as argument
    char a = 'x';
    int b = 1602;
    cout<<"\n\nvalue of char a = "<<a<<", value of int b = "<<b;

    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    cout<<"\nnext value of char a is "<<a<<", next value of int b is "<<b;

    //output:
    //    value of char a = x, value of int b = 1602
    //    next value of char a is y, next value of int b is 1603
}
