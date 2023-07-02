#include<iostream>
using namespace std;
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
