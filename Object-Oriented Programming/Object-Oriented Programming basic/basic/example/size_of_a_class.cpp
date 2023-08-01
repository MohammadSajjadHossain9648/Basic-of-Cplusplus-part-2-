#include<iostream>
using namespace std;
/*
    to know more: https://www.simplilearn.com/tutorials/cpp-tutorial/oops-concepts-in-cpp
                  https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/
                  https://www.freecodecamp.org/news/object-oriented-programming-in-c/
                  https://www.javatpoint.com/cpp-oops-concepts
                  https://www.programiz.com/cpp-programming/object-class
                  https://www.educative.io/blog/is-cpp-object-oriented-programming-language
                  https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP
                  https://www.indeed.com/career-advice/career-development/what-is-object-oriented-programming
                  https://www.codecademy.com/learn/c-plus-plus-for-programmers/modules/object-oriented-programming-in-cpp/cheatsheet
                  https://levelup.gitconnected.com/cpp-object-oriented-programming-an-in-depth-guide-f56a597091d8
*/
//empty class
class People
{

};

class Man
{
    //private data member without declare access modifier(private)
    string name;
};

class Human
{
public:
    //object properties/state which we can say as data member
    int age;

    //object behavior which we can say as member function
    void walk()   //can write only -> walk()
    {
        cout<<"\nhuman can walk.";
    }
};

class Student
{
    //private data member without declare access modifier(private)
    char level;
    int Id;
    char grade;
};

class Student2
{
    //private data member without declare access modifier(private)
    char level;
    char grade;
    int Id;
};

class Data
{
private:
    static int i;
    int a;
    char b;

public:
    A()
    {
        a = 0;
        b = '#';
    }
    A(int aa, char bb)
    {
        a = aa;
        b = bb;
    }
    int get_int()
    {
        cout<<a<<endl;
        return a;
    }
    char get_char()
    {
        cout<<b<<endl;
        return b;
    }
};

int main()
{
    //variable size
    cout<<"\nsize of int: "<<sizeof(int);
    cout<<"\nsize of char: "<<sizeof(char);
    cout<<"\nsize of string: "<<sizeof(string);
    cout<<"\nsize of double: "<<sizeof(double);
    cout<<"\nsize of float: "<<sizeof(float);


    //create object p of People class
    People p;
    cout<<"\n\nsize of People class: "<<sizeof(People);
    cout<<"\nPeople class is empty & size of People class object p: "<<sizeof(p);


    //create object m of Man class
    Man m;
    cout<<"\n\nsize of Man class: "<<sizeof(Man);
    cout<<"\nsize of Man class object m: "<<sizeof(m);


    //create object h of Human class
    Human h;

    h.age = 0;

    cout<<"\n\nsize of Human class: "<<sizeof(Human);
    cout<<"\nsize of Human class object h: "<<sizeof(h);


    //create object s of Student class
    Student s;
    cout<<"\n\nsize of Student class: "<<sizeof(Student);
    cout<<"\nsize of Student class object s: "<<sizeof(s);


    //create object s of Student class
    Student2 s2;
    cout<<"\n\nsize of Student2 class: "<<sizeof(Student2);
    cout<<"\nsize of Student2 class object s2: "<<sizeof(s2);


    //create object d of Data class
    Data d;
    cout<<"\n\nsize of Data class: "<<sizeof(Data);
    cout<<"\nsize of Data class object d: "<<sizeof(d);


    //output:
    //
    //    size of int: 4
    //    size of char: 1
    //    size of string: 32
    //    size of double: 8
    //    size of float: 4
    //
    //    size of People class: 1
    //    People class is empty & size of People class object p: 1
    //
    //    size of Man class: 32
    //    size of Man class object m: 32
    //
    //    size of Human class: 4
    //    size of Human class object h: 4
    //
    //    size of Student class: 12
    //    size of Student class object s: 12
    //
    //    size of Student2 class: 8
    //    size of Student2 class object s2: 8
    //
    //    size of Data class: 8
    //    size of Data class object d: 8


/*  important interview question
    why empty People class size is 1? or if class is empty, what is the size of the class? and why?
    when we create a People class, it takes no space in memory. cause class is a template or blueprint.
      class People
    ------------------
    |                |
    |                |
    |                |
    |                |
    ------------------

    when we write People p1;, we create object or instance of People class. after create object p1, memory see no
    properties/data member/variable in class People. so, for tracking memory of object p1, memory give 1 byte of block.
    thats why store p1 object in a empty block where block size is 1.
*/

/*
    why Man class size is 32?
    when we create a Man class, it takes no space in memory. cause class is a template or blueprint.
      class Man                     object m1
    ------------------        ------------------
    |                |        |          ----  |
    |  string name;  |  --->  |   name = |  |  |
    |                |        |          ----  |
    |                |        |                |
    ------------------        ------------------
       class template
       or blueprint

    when we write Man m1;, we create object or instance of Man class. after create object m1, memory see a
    property/data member/variable of string name in class Man. so, memory give 32 byte of block for string variable
    with garbage value.
    thats why store m1 object in a block where block size is 32 with garbage value.
*/

/*
    why Human class size is 4?
    when we create a Human class, it takes no space in memory. cause class is a template or blueprint.
      class Human                  object h1
    ------------------        ------------------
    |                |        |          ----  |
    |    int age;    |  --->  |    age = |10|  |
    |                |        |          ----  |
    |                |        |                |
    ------------------        ------------------
       class template
       or blueprint

    when we write Human h1;, we create object or instance of Human class. after create object h1, memory see a
    property/data member/variable of int name in class Human. so, memory give 4 byte of block for int variable
    with garbage value.
    thats why store h1 object in a block where block size is 4 with original value.
*/

/*  important interview question
    why Student class size is 12?(read-> github:\code in c++ part 2\Object-Oriented Programming\padding or greedy alignment)
    here we see in class Student, two char and one int data member, so that total memory size will be (1+1+4) = 6
    bytes which was expected.

    let level = a, Id = b and grade = c.
    sol: see the memory structure first
        ----------------------------
        |     |      |      |      |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
                    memory
            (4*8 bytes = 32 bytes)

    step 1: First, memory is allocated to the char a variable, which size is 1 byte.

        ----------------------------
        |  a  |      |      |      |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------


    step 2: Now, the memory will be allocated to the int b Since the int variable occupies 4 bytes, but on the left,
    only 3 bytes are available. The empty column will be created on these 3 bytes, and the int variable would occupy
    the other 4 bytes so that the integer variable can be accessed in a single CPU cycle. cause We know that the CPU
    can access 4 bytes at a time.

        ----------------------------
        |  a  |      |      |      |  ---->  4 bytes
        ----------------------------
        |            b             |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------


    step 3: Now, the memory will be given to the char c At a time, We know that the CPU can access 4 bytes at a time,
    so CPU will use 4 bytes to access a 'c' variable.

        ----------------------------
        |  a  |      |      |      |  ---->  4 bytes
        ----------------------------
        |            b             |  ---->  4 bytes
        ----------------------------
        |  c  |      |      |      |  ---->  4 bytes
        ----------------------------

    Therefore, the total memory required is 12 bytes (4 bytes +4 bytes +4 bytes), i.e., 4 bytes required to access
    char a variable, 4 bytes required to access int b variable, and other 4 bytes required to access a single
    character of 'c' variable.
*/
/*
    important interview question
    why Student2 class size is 8?(read-> github:\code in c++ part 2\Object-Oriented Programming\padding or greedy alignment)
    here we see in class Student, two char and one int data member, so that total memory size will be (1+1+4) = 6
    bytes which was expected.
    and also above student class size is 12 with same variable but only sequnce data member order change.
    see the variable order:
        class Student
        {
            char level;
            int Id;
            char grade;
        };

        class Student2
        {
            char level;
            char grade;
            int Id;
        };


    let level = a, Id = b and grade = c.
    sol: see the memory structure first
        ----------------------------
        |     |      |      |      |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------
                    memory
            (4*8 bytes = 32 bytes)

    step 1: First, memory is allocated to the char a variable, which size is 1 byte.

        ----------------------------
        |  a  |      |      |      |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------


    step 2: Now, the memory will be allocated to the char c Since the char variable occupies 1 bytes, but on the right,
    only 3 bytes are available. The empty column will be created on these 3 bytes, and the char variable would store
    in empty 1 byte and rest 2 bytes remain empty.

        ----------------------------
        |  a  |   c  |      |      |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------
        |     |      |      |      |
        ----------------------------


    step 3: Now, the memory will be allocated to the int b Since the int variable occupies 4 bytes, but on the left,
    only 2 bytes are available. The empty column will be created on these 2 bytes, and the int variable would occupy
    the other 4 bytes so that the integer variable can be accessed in a single CPU cycle. cause We know that the CPU
    can access 4 bytes at a time.

        ----------------------------
        |  a  |   c   |     |      |  ---->  4 bytes
        ----------------------------
        |            b             |  ---->  4 bytes
        ----------------------------
        |     |      |      |      |
        ----------------------------

    Therefore, the total memory required is 8 bytes (4 bytes +4 bytes), i.e., 4 bytes required to access
    char a and char c variable, and other 4 bytes required to access int b variable.
*/
/*  important interview question
    why Data class size is 8?(read-> github:\code in c++ part 2\Object-Oriented Programming\padding or greedy alignment)
    We know that a struct size is not only the summation of all the data members, rather it's the minimum sum guaranteed.
    The compiler adds some padding for data member alignment.

    In the C++ class, things are exactly the same as a struct. But there are a few more things.

    Firstly, while in C++ there are member functions, static data members. Do those have any contribution to the size
    of the class, objects?

    The answer is no. Only the non-static data members contribute to the size of class and objects. This is because
    static members have only one instance which is shared among all objects. And normal member functions are like
    executable code which does not have size like data members.
*/
}
