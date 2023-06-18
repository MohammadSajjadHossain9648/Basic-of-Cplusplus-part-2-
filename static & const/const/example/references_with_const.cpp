#include<iostream>
using namespace std;
/*
    note: reference variable never change, only change original value
*/
int main()
{
    int x = 10;

    const int &ref1 = x; //same as -> int const &ref2 = x; and reference to const int and only change x value not ref

    cout<<"const int &ref1 or &ref2 = "<<ref1;

    //changing value of references
    //ref2 = 20; or ref2 = 20; //show error -> can not change ref value

    x = 20;
    cout<<"\nafter change x = 20 -> ref1 or ref2 = "<<ref1;


    //output:
    //    const int &ref1 or &ref2 = 10
    //    after change x = 20 -> ref1 or ref2 = 20
}
