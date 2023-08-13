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
    read(same) -> create_object_by_using_static_allocation_and_dynamic_allocation.cpp
*/
class Rectangle
{
    int width, height;
public:
    Rectangle(int x, int y)
    {
        width = x;
        height = y;
    }
    int area(void)
    {
        return width * height;
    }
};


int main()
{
    //static allocation
    Rectangle obj (3, 4);

    //dynamic allocation
    Rectangle * foo, * bar, * baz;

    foo = &obj; //copy object obj to foo object

    bar = new Rectangle (5, 6);
    baz = new Rectangle[2] { {2,5}, {3,6} }; //Array of Objects

    cout<<"\nobj's area: "<<obj.area();
    cout<<"\n*foo's area: "<<foo->area();
    cout<<"\n*bar's area: "<<bar->area();
    cout<<"\nbaz[0]'s area:"<<baz[0].area();
    cout<<"\nbaz[1]'s area:"<<baz[1].area();
    delete bar;
    delete[] baz;


    //output:
    //
    //    obj's area: 12
    //    *foo's area: 12
    //    *bar's area: 30
    //    baz[0]'s area:10
    //    baz[1]'s area:18
}
