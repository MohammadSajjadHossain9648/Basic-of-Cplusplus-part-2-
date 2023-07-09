#include<iostream>
using namespace std;

double getAverage(int *num, int len)
{
    int sum = 0;
    for(int i=0; i<len; i++)
    {
        sum += num[i];
    }

    return sum/len;
}
int main()
{
    int num[] = {10,20,30,40,50};

    cout<<"the average number is "<<getAverage(num, 5);

    //output: the average number is 30
}
