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
int add(int num1, int num2)
{
    return num1+num2;
}
int subtraction(int num1, int num2)
{
    return (num1>num2) ? (num1-num2): (num2-num1);
}
int multiply(int num1, int num2)
{
    return num1*num2;
}
int division(int num1, int num2)
{
    return (num1>num2) ? (num1/num2): (num2/num1);
}
int main()
{
    //here calculator[] is a function pointer array
    int (*calculator[])(int, int) = {add, subtraction, multiply, division};
    int num1, num2, opt;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2;

    cout<<"\nEnter Choice: 0 for add, 1 for subtract, 2 for multiply, 3 for division\n";
    cin>>opt;

    int result = (*calculator[opt])(num1,num2);
    cout<<"\nresult is "<<result;

}
