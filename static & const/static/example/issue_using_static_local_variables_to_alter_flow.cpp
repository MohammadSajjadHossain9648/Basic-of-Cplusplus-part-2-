#include<iostream>
using namespace std;
/*
    before start read: https://www.learncpp.com/cpp-tutorial/static-local-variables/
*/
int getInteger()
{
    static bool isFirstCall{ true };

    if (isFirstCall)
    {
        cout<<"Enter an integer: ";
        isFirstCall = false;
    }
    else
    {
        cout<<"Enter another integer: ";
    }

    int i;
    cin>>i;
    return i;
}

int main()
{
    cout<<"Addition\n";

    int a{ getInteger() };
    int b{ getInteger() };

    cout<<a<<" + "<<b<<" = "<<(a + b)<<'\n';

    cout<<"Subtraction\n";

    int c{ getInteger() };
    int d{ getInteger() };

    cout<<c<<" - "<<d<<" = "<<(c - d)<<'\n';
}
