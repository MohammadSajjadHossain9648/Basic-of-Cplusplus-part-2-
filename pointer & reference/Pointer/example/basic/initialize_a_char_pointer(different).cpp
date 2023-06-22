#include<iostream>
using namespace std;
/*
    remember that never use pointer for single char or string.
    like an example:
    char word = 'z';
    char *c = &word; ->never use it
    or,
    char word2[6] = "abcde";
    char *c2 = &word2[0]; ->never use it

    and also, single char never give address of own, only pointer give own address
    example 1:
    char ch1 = 'm';
    cout<<"address of ch1: "<<&ch1; //same as cout<<"address of ch1: "<<ch1; // -> not print ch1 variable address, print character
    char *c1 = &ch1;
    cout<<"\naddress of c1: "<<c1; // -> print c1 variable value with garbage

    example 2:
    char word2[6] = "fghij";
    char *w2 = &word2[0];
    cout<<"\naddress of w2: "<<w2; // -> never give word2 address, but print w2 variable value like fghij
*/
int main()
{
//sizeof
    char cc1;
    char *pp1; //same as char *pp1 = &cc1;
    cout<<"sizeof(char cc1): "<<sizeof(cc1); // only create a block of 1 bytes for memory allocation
    cout<<"\nsizeof(char *pp1): "<<sizeof(pp1); //pointer store value and address both with (4+4) byte = 8 byte
    char cc2[6];
    char *pp2; //same as char *pp2 = &cc2[0];
    cout<<"\n\nsizeof(char cc2): "<<sizeof(cc2);
    cout<<"\nsizeof(char *pp2): "<<sizeof(pp2);


    //output:
    //    sizeof(char cc1): 1
    //    sizeof(char *pp1): 8
    //
    //    sizeof(char cc2): 6
    //    sizeof(char *pp2): 8



//initialize char pointer
    char ch1 = 'm';
    cout<<"\n\n\nchar ch1 = 'm'";
    char *c1 = &ch1;
    cout<<"\n\nusing pointer:\nown address of &c1: "<<&c1; // -> print c1 variable address
    cout<<"\nvalue of *c1: "<<*c1; // -> print c1 variable value


    char word2[6] = "fghij";
    cout<<"\n\n\nchar word2[6] = \"fghij\" -> address of word2: "<<&word2;
    char *w2 = &word2[0];
    cout<<"\n\nusing pointer:\nown address of &w2: "<<&w2; // -> print w2 variable address
    cout<<"\nvalue of w2: "<<w2; // -> print w2 variable value
    cout<<"\nvalue of *w2: "<<*w2; // -> print w2 first variable value or first block value


    //output:
    //    char ch1 = 'm'
    //
    //    using pointer:
    //    own address of &c1: 0xb8d09ff6f0
    //    value of *c1: m
    //
    //
    //    char word2[6] = "fghij" -> address of word2: 0xb8d09ff6ea
    //
    //    using pointer:
    //    own address of &w2: 0xb8d09ff6e0
    //    value of w2: fghij
    //    value of *w2: f



//increment or decrement operator in pointer
    char ch = 'b';
    char *p1 = &ch; //never write int *p1 = ch++;, cause ch store in symbol table which never change
    (*p1)++;
    cout<<"\n\n\nvalue of *p1 is "<<*p1;
    cout<<"\nvalue of ch is "<<ch;

    //output:
    //    value of *p1 is c
    //    value of ch is c




//difference between int and char
    int num[5] = {1,2,3,4,5};
    cout<<"\n\nint num[5] = {1,2,3,4,5} -> address of num: "<<num; // -> print num variable address
    int *p = &num[0];
    cout<<"\n\nusing pointer:\naddress of &p: "<<&p; // -> print p variable address
    cout<<"\nvalue of p: "<<p; // -> print p variable value


    char ch = 'h';
    cout<<"\n\n\nchar ch = 'h' -> address of ch: "<<ch; // -> not print ch variable address, print whole ch
    char *c = &ch;
    cout<<"\n\nusing pointer:\nown address of &c: "<<&c; // -> print c variable address
    cout<<"\naddress of c: "<<c; // -> print c variable value with garbage
    cout<<"\nvalue of *c: "<<*c; // -> print c variable value


    char word[6] = "abcde";
    cout<<"\n\n\nchar word[6] = \"abcde\" -> address of word: "<<word; // -> not print word variable address, print whole word
    char *w = &word[0];
    cout<<"\n\nusing pointer:\nown address of &w: "<<&w; // -> print c variable address
    cout<<"\naddress of w: "<<w; // -> print w variable value
    cout<<"\nvalue of *w: "<<*w; // -> print w variable value

    //output:
    //    int num[5] = {1,2,3,4,5} -> address of num: 0xd0257ff760
    //
    //    using pointer:
    //    address of &p: 0xd0257ff758
    //    value of p: 0xd0257ff760
    //
    //
    //    char ch = 'h' -> address of ch: h
    //
    //    using pointer:
    //    own address of &c: 0xd0257ff748
    //    address of c: h`¸⌂%ð      ->single char print with garbage value
    //    value of *c: h
    //
    //
    //    char word[6] = "abcde" -> address of word: abcde
    //
    //    using pointer:
    //    own address of &w: 0xd0257ff738
    //    address of w: abcde
    //    value of *w: a




//increment or decrement operator in pointer
    char arr2[6] = "abcde";
    char *p2 = &arr2[0]; //never write int *p2 = arr2++;, cause arr store in symbol table which never change
    *p2++;//same as p2++; and if write (*p2)++; -> print 10+1
    cout<<"\n\n\nvalue of *p2 is "<<*p2;
    cout<<"\nvalue of p2 is "<<p2;
    cout<<"\nvalue of arr2 is "<<arr2;

    //output:
    //    value of *p1 is b
    //    value of p1 is bcde
    //    value of arr2 is abcde



    /*
    char word = 'z';
    char *c = &word;
    cout<<"\nvalue of c: "<<c;

    why print: value of c: z`¸⌂%ð ?
    reason: whatever pointer didnot get the null value, it print with garbage value like z`¸⌂%ð
    like, let
    see the model below:
        word                                         c
        ---                                -------------------------
        |z|                           |--> |0x7fff5fbff8ac(or, &word)|
        ---                           |    -------------------------
   0x7fff5fbff8ac(address of word)-----    0x7ffc1e98dfa4(address of c)

    when we write -> cout<<"\nvalue of c: "<<c;
    c start print with store address value whatever c get null value. so garbage value print with z.
    */
}
