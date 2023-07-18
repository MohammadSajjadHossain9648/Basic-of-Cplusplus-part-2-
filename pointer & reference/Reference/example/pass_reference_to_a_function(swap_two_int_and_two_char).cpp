#include<iostream>
using namespace std;
/*
    Passing by Reference: It allows a function to modify a variable without having to create a copy of it. We have
    to declare reference variables. The memory location of the passed variable and parameter is the same and
    therefore, any change to the parameter reflects in the variable as well.
*/
void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap2(string &str1, string &str2)
{
    string temp = str1;
    str1 = str2;
    str2 = temp;
}
void swap3(char* &ch1, char* &ch2) //same as void swap3(char &ch1[], char &ch2[]) & never write (char& *ch1,char& *ch2)
{
    char* temp = ch1;
    ch1 = ch2;
    ch2 = temp;
}

int main()
{
    int num1 = 10, num2 = 5;
    cout<<"\n\nBefore swap:num1 = "<<num1<<" & num2 = "<<num2;
    swap(num1, num2);
    cout<<"\nAfter swap:num1 = "<<num1<<" & num2 = "<<num2;

    string str1 = "hello", str2 = "hi";
    cout<<"\n\nBefore swap:str1 = "<<str1<<" & str2 = "<<str2;
    swap2(str1, str2);
    cout<<"\nAfter swap:str1 = "<<str1<<" & str2 = "<<str2;

    //same as string part
    char *ch1 = "hello", *ch2 = "hi"; //same as char ch1[] = "hello", ch2[] = "hi";
    cout<<"\n\nBefore swap:ch1 = "<<ch1<<" & ch2 = "<<ch2;
    swap3(ch1, ch2);
    cout<<"\nAfter swap:ch1 = "<<ch1<<" & ch2 = "<<ch2;

    //output:
    //
    //    Before swap:num1 = 10 & num2 = 5
    //    After swap:num1 = 5 & num2 = 10
    //
    //    Before swap:str1 = hello & str2 = hi
    //    After swap:str1 = hi & str2 = hello
    //
    //    Before swap:ch1 = hello & ch2 = hi
    //    After swap:ch1 = hi & ch2 = hello
}
