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
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(int);

    //without references
    for(int i: arr)
    {
        i += 5;
    }
    cout<<"without references:\narr[] = ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //with references
    for(int &i: arr)
    {
        i += 5;
    }
    cout<<"with references:\narr[] = ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //output:
    //    without references:
    //    arr[] = 1 2 3 4 5
    //    with references:
    //    arr[] = 6 7 8 9 10
}
