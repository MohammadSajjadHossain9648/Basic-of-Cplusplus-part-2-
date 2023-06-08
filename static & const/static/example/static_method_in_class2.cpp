#include<iostream>
using namespace std;

class sample
{
    int var;
    static int count;

public:
    sample(int var):var(var)
    {
        cout<<"\nCount = "<<count;
        count++;
    }
};

int sample::count = 0;   //static variable initialisation

int main()
{
    sample s(2), s1(10),s3(1);

    //output:
    //
    //    Count = 0
    //    Count = 1
    //    Count = 2
}
