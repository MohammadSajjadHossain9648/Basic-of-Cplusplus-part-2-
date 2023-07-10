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
