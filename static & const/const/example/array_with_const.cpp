#include<iostream>
using namespace std;
int main()
{
    const double arr[4] = { 1.1, 2.3, -4.5, 8 };
    //arr[2] = 3.1;          // ERROR -- attempt to assign to const object
    cout<<arr[0];

    //output:
    //  1.1
}
