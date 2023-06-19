#include<iostream>
using namespace std;
const int foo(int y)
{
    y--;
    return y;
}

const int foo2(const int y)
{
    // y = 9; it'll give CTE error as y is const var its value can't be change
    return y;
}

int main()
{
    int x = 9;
    const int z = 10;
    cout<<foo(x)<<'\n'<<foo(z);

    //output:
    //    8
    //    9


    int x2 = 9;
    const int z2 = 10;
    cout<<'\n'<<foo2(x2)<<'\n'<<foo2(z2);

    //output:
    //    9
    //    10
}
