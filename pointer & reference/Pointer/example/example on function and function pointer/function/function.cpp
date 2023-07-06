#include<iostream>
using namespace std;
void getSeconds(unsigned long *par) {
   // get the current number of seconds
   *par = time( NULL );
}

int main()
{
    unsigned long sec;
    getSeconds( &sec );

    // print the actual value
    cout << "Number of seconds :" << sec << endl;
}
