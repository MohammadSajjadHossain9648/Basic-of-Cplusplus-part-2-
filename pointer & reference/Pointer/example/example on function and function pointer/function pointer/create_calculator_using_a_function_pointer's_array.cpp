#include<iostream>
using namespace std;

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
