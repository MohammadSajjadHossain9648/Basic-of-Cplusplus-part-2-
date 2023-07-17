#include<iostream>
using namespace std;
/*
    declare variable globally what value want to change, otherwise return references didnot work
*/

//example 1: change int value
int num = 123; //declare globally

int &swap(int i)
{
    num = i;
    return num;
}


//example 2: change array value
int arr[] = {1,0,3,0,5}; //declare globally

int &swap2(int i)
{
    return arr[i];
}

int main()
{
//example 1: change int value
    cout<<"\n\nBefore change : num = "<<num;
    swap(100);
    cout<<"\nAfter change : num = "<<num;


//example 2: change array value
    cout<<"\n\nBefore change : arr[] = ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    swap2(1) = 2;
    swap2(3) = 4;

    cout<<"\nAfter change : arr[] = ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

    //output:
    //
    //    Before change : num = 123
    //    After change : num = 100
    //
    //    Before change : arr[] = 1 0 3 0 5
    //    After change : arr[] = 1 2 3 4 5
}

