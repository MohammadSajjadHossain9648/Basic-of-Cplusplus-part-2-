#include<iostream>
using namespace std;

class Room
{
private:
    double length;
    double width;
    double height;

public:
    //member function to initialize private variables
    initData(double len, double wdt, double hgt)
    {
        length = len;
        width = wdt;
        height = hgt;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    // create object of Room class
    Room r1;

    // assign values to data members
    r1.initData(42.5, 30.8, 19.2);

    cout<<"\n\nArea of Room =  "<<r1.calculateArea();
    // calculate and display the area and volume of the room
    cout<<"\nVolume of Room =  "<<r1.calculateVolume();


    //output:
    //
    //    Area of Room =  1309
    //    Volume of Room =  25132.8
}
