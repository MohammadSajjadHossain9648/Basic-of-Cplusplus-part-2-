#include<iostream>
using namespace std;

int main()
{
//pointer
    int num1 = 10; // simple or ordinary variable.
    int* ptr = &num1; // single pointer
    int** ptr2 = &ptr; // double pointer
    int*** ptr3 = &ptr2; // triple pointer

    // All the above pointers differ in the value they store or point to.
    cout<<"pointer: \n"
        <<"num1 = "<<num1<<"\n"
        <<"ptr = "<<ptr<<"\n"
        <<"ptr2 = "<<ptr2<<"\n"
        <<"ptr3 = "<<ptr3<<'\n';


//reference
    int num2 = 5; // simple or ordinary variable
    int& ref = num2;
    int& ref2 = ref;
    int& ref3 = ref2;
    //int&& ref3 = ref2; -> show error cause there is no reference to reference


     // All the above references do not differ in their values as they all refer to the same variable.
    cout<<"\n\nreference: \n"
        <<"num2 = "<<num2<<"\n"
        <<"ref = "<<ref<<"\n"
        <<"ref2 = "<<ref2<<"\n"
        <<"ref3 = "<<ref3<<'\n';



    //output:
    //    pointer:
    //    num1 = 10
    //    ptr = 0xf8045ff95c
    //    ptr2 = 0xf8045ff950
    //    ptr3 = 0xf8045ff948
    //
    //
    //    reference:
    //    num2 = 5
    //    ref = 5
    //    ref2 = 5
    //    ref3 = 5
}
