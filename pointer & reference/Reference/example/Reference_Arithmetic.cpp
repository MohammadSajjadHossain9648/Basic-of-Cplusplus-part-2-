#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int &ptr = num; //ptr is a reference to num

    cout<<"\n\nbefore changing value of num:\nvalue of ptr/num: "<<ptr;
    ptr += 5; //&ptr += 5; cause arithmetic operation is not possible with reference variable, it throws an error.
    cout<<"\n\nafter changing value of num:\nvalue of ptr/num: "<<ptr;

    num -= 5; //&ptr -= 5; cause arithmetic operation is not possible with reference variable, it throws an error.
    cout<<"\n\nafter changing value of num:\nvalue of ptr/num: "<<ptr;


    //output:
    //    before changing value of num:
    //    value of ptr/num: 5
    //
    //    after changing value of num:
    //    value of ptr/num: 10
    //
    //    after changing value of num:
    //    value of ptr/num: 5
}
