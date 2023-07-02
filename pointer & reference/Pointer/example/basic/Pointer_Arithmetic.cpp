#include<iostream>
using namespace std;
/*  Pointer Arithmetic:
    There are four arithmetic operators that can be used on pointers: ++, --, +, -

    *p++   // same as *(p++): increment pointer, and dereference unincremented address
    *++p   // same as *(++p): increment pointer, and dereference incremented address
    ++*p   // same as ++(*p): dereference pointer, and increment the value it points to
    (*p)++ // dereference pointer, and post-increment the value it points to


    A typical -but not so simple- statement involving these operators is:
    *p++ = *q++;
    or, can write
    *p = *q;
    p += 1;
    q += 1;

    Because ++ has a higher precedence than *, both p and q are incremented, but because both increment operators(++)
    are used as postfix and not prefix, the value assigned to *p is *q before both p and q are incremented. And then
    both are incremented. It would be roughly equivalent to:

    *p = *q;
    ++p;
    ++q;

    Like always, parentheses reduce confusion by adding legibility to expressions.
*/
int main()
{
    //increment/decrement value of x by using pointer
    int x = 10;
    int *p1 = &x;

    *p1++; //*p1 += 1; but if write -> (*p1)++;, it show 11
    cout<<"\nafter increase 1,value of x is "<<x;
    *p1--; //*p1 -= 1;
    cout<<"\nafter decrease 1,value of x is "<<x;

    //output
    //
    //    after increase 1,value of x is 11
    //    after decrease 1,value of x is 10


    /* always remember
    int x = 10;
    int *p1 = &x;

    *p1++;
    cout<<"\nafter increase 1,value of x is "<<x;
    *p1--;
    cout<<"\nafter decrease 1,value of x is "<<x;

    //output
    //
    //    after increase 1,value of x is 10
    //    after decrease 1,value of x is 10
    */


    //another example:
    int num[] = {10,20,30,40,50};
    int len = sizeof(num)/sizeof(int);

    int *ptr = &num[0];

    cout<<"\nint ptr[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<*ptr++<<" ";
        ptr++; //same as ptr += 1;

        /*can write in one line
        cout<<*ptr++<<" ";
        */
    }


    //another example:
    int num2[] = {10,20,30,40,50};
    int len2 = sizeof(num2)/sizeof(int);

    int *ptr2 = &num[len2-1];

    cout<<"\n\nafter reverse, int ptr2[]: ";
    for(int i=0; i<len2; i++)
    {
        cout<<*ptr2<<" ";
        ptr2--; //same as ptr -= 1;

        /*can write in one line
        cout<<*ptr--<<" ";
        */
    }



    //another example:
    int numbers[5];
    int * p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p++;  //same as,p += 1; or p = &numbers[2]; or p = numbers + 2; or p = numbers;
    *p = 30;
    p++;
    *p = 40;
    p = numbers;
    *(p+4) = 50;

    //output:
    //    int ptr[]: 10 20 30 40 50
    //
    //    after reverse, int ptr2[]: 50 40 30 20 10






//increment or decrement operator in pointer of int
    int x1 = 10;
    int *pt1 = &x1; //never write int *pt1 = x1++;, cause arr store in symbol table which never change
    (*pt1)++;// never write pt1++ or *pt1++; -> print garbage like 10+1+4
    cout<<"\n\n\nvalue of *pt1 is "<<*pt1;
    cout<<"\nvalue of x1 is "<<x1;

    //output:
    //    value of *pt1 is 11
    //    value of x1 is 11


//increment or decrement operator in double pointer of int
    int x2 = 10;
    int *pt3 = &x2; //never write int *pt3 = x++;, cause arr store in symbol table which never change
    int **pt4 = &pt3;
    (**pt4)++;// never write pt3++ or **pt3++; -> print garbage like 10+1+4
    cout<<"\n\n\nvalue of *pt4 is "<<**pt4;
    cout<<"\nvalue of x2 is "<<x2;

    //output:
    //    value of *pt4 is 11
    //    value of x2 is 11


//increment or decrement operator in pointer of int
    int arr1[] = {10,20,30,40,50};
    int *pt2 = &arr1[0]; //never write int *pt2 = arr1++;, cause arr store in symbol table which never change
    *pt2++;//same as pt2++; and if write (*pt2)++; -> print 10+1
    cout<<"\n\n\nvalue of *pt2 is "<<*pt2;

    //output: value of *pt2 is 20


//increment or decrement operator in pointer
    char ch = 'b';
    char *pt5 = &ch; //never write int *pt5 = ch++;, cause ch store in symbol table which never change
    (*pt5)++;
    cout<<"\n\n\nvalue of *pt5 is "<<*pt5;
    cout<<"\nvalue of ch is "<<ch;

    //output:
    //    value of *pt5 is c
    //    value of ch is c


//increment or decrement operator in pointer
    char arr2[6] = "abcde";
    char *p2 = &arr2[0]; //never write int *p2 = arr2++;, cause arr store in symbol table which never change
    *p2++;//same as p2++; and if write (*p2)++; -> print 10+1
    cout<<"\n\n\nvalue of *p2 is "<<*p2;
    cout<<"\nvalue of p2 is "<<p2;
    cout<<"\nvalue of arr2 is "<<arr2;

    //output:
    //    value of *p2 is b
    //    value of p2 is bcde
    //    value of arr2 is abcde
}
