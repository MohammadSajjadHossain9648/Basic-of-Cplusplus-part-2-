#include<iostream>
using namespace std;

//declare static variable globally
static int global_num = 20;


//Assigning function values to main function static variables
int initializer(void)
{
    return 2*10;
}

int main()
{
//initialize static variable in main
    static int num;
    int num2;
    cout<<"\nstactic int num = "<<num<<"\nint num2 = "<<num2;



//Assigning function values to static variables
    static int i = initializer();
    cout<<"\n\nstatic int i = "<<i;



//reinitialized static variable
//The value of a static variable can be reinitialized wherever its scope exists.
    static int x = 10;
    x++;
    cout<<"\n\nstactic int x = "<<x;

    x = 0; //reinitialized static variable x
    cout<<"\nafter reinitialized: x = "<<x;



//globally initialize static variable
    cout<<"\n\nafter initialized globally: global_num = "<<global_num;



    //output:
    //
    //    stactic int num = 0
    //    int num2 = 0
    //
    //    static int i = 20
    //
    //    stactic int x = 11
    //    after reinitialized: x = 0
    //
    //    after initialized globally: global_num = 20
}
