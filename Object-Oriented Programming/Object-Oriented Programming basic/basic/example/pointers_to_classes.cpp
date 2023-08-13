#include<iostream>
using namespace std;

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
