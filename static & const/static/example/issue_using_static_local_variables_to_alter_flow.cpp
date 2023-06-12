#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/static-variables-in-c/
                  https://www.geeksforgeeks.org/static-keyword-cpp/
                  https://www.geeksforgeeks.org/memory-layout-of-c-program/
                  https://www.geeksforgeeks.org/what-are-static-functions-in-c/
                  https://dotnettutorials.net/lesson/static-variables-in-cpp
                  https://linuxhint.com/static-variable-cpp/
                  https://www.learncpp.com/cpp-tutorial/static-local-variables/
                  https://www.cs.uaf.edu/2010/spring/cs202/lecture/02_16_static.html
                  https://www.scaler.com/topics/static-variables-in-c/
                  https://www.scaler.com/topics/cpp/static-member-in-cpp/
                  https://www.programiz.com/cpp-programming/storage-class
                  https://www.softwaretestinghelp.com/static-in-cpp/
                  https://www.studytonight.com/cpp/static-keyword.php
                  https://www.javatpoint.com/cpp-static
                  https://www.tutorialspoint.com/static-keyword-in-cplusplus
*/
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
