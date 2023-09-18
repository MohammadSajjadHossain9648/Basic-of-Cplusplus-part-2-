#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    // Constructor declaration
    Car(string, string, int); //can write -> Car(string x, string y, int z);
};

// Constructor definition outside the class
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
    return 0;
}
