#include<iostream>
using namespace std;

int *getRandom()
{
    static int arr[10];

    //set the seed
    //which use for random number create all compiling time otherwise it generate same 10 numbers all compiling time
    srand( (unsigned)time( NULL ) );

    for(int i=0; i<10; i++)
    {
        arr[i] = rand();
    }

    return arr;
}
int main()
{
    int *num;
    num = getRandom();

    for(int i=0; i<10; i++)
    {
        cout<<"\nnumber "<<i+1<<" : "<<num[i];
    }

    //output:
    //    number 1 : 24000
    //    number 2 : 5804
    //    number 3 : 14090
    //    number 4 : 28539
    //    number 5 : 18619
    //    number 6 : 1972
    //    number 7 : 13131
    //    number 8 : 23794
    //    number 9 : 26853
    //    number 10 : 16327
}
