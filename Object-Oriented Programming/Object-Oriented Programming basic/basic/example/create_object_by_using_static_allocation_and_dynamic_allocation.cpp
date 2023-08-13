#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/inheritance-in-c/
                  https://www.javatpoint.com/cpp-inheritance
                  https://www.softwaretestinghelp.com/types-of-inheritance-in-cpp/
                  https://cplusplus.com/doc/tutorial/inheritance/
                  https://tutorialspoint.dev/language/cpp/inheritance-in-c
                  https://www.scaler.com/topics/cpp/inheritance-in-cpp/
                  https://techvidvan.com/tutorials/inheritance-in-cpp/
                  https://www.educba.com/multiple-inheritance-in-c-plus-plus/
*/
/*
    getter use for read/fetch only.
    setter use for accessing the private data member and for security purpose we can add condition in setter
    function which we can call encapsulation.
*/
/*
    Why Classes Need Getters and Setters:
    The convention when designing a C++ class is to make the member variables private to control access to them.
    With data hiding, you can write code that checks the data coming into a class to make sure it is valid before
    assigning it to member variables.

    For example, if a class is storing a person’s age, by marking the member variable as private you can provide
    access to the variable through a function that first checks to make sure the data being passed in is a valid age.
    If not, you can assign a default value or ask the user to enter the data in again.

    Without this check, the data entered for an age can be any legal value allowed for that type by the compiler.
    So an age passed to an integer variable can be 34 or it can be 123,345 since those are both valid integer
    values. A data validating function can stop illegal values from entering the object and preserving the integrity
    of the data.

    Since a member variable marked as private cannot be accessed in any matter, a class must also provide means for
    the data stored in a member variable to be retrieved from an object, if that is part of the design. This function
    is not as important for maintaining data integrity but it is usually a practical necessity.

    Our object-oriented programs can meet these data setting and data retrieval needs by providing getter and setter
    member functions as part of the class interface.
*/
class Voter
{
private:
    string name;
    int age;
    bool eligible = false;

public:
    //setter
    void setAge(int a)  //same as -> setAge(int a)
    {
        if(a >= 18)
        {
            age = a;
            eligible = true;
        }
    }
    void setName(string n)  //same as -> setName(string n)
    {
        if(eligible)
        {
            name = n;
        }
    }

    //getter
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }

    //display all eligible voter list
    void display()
    {
        if(eligible)
        {
            cout<<"\n\nname : "<<name<<"\nage: "<<age;
        }
    }
};

int main()
{
//static allocation(Voter p1;)
    cout<<"all eligible voter lists: ";
    Voter p1;
    p1.setAge(20);
    p1.setName("rafi");
    p1.display();


    Voter p2;
    p2.setAge(15);
    p2.setName("kabir");
    p2.display();


    Voter p3;
    p3.setAge(35);
    p3.setName("faysal");
    p3.display();


    Voter p4;
    p4.setAge(12);
    p4.setName("sani");
    p4.display();




//dynamic allocation(Voter *v1 = new Voter;)
    cout<<"\n\nall eligible voter lists: ";
    Voter *v1 = new Voter;  //same as Voter *v1 = new Voter();
    v1->setAge(20);
    v1->setName("rafi");
    v1->display();

    /*
    can write another way
    Voter *v1 = new Voter;
    (*v1).setAge(20);
    (*v1).setName("rafi");
    (*v1).display();

    never write
    v1.setAge(20);
    v1.setName("rafi");
    v1.display();
    */


    Voter *v2 = new Voter;
    v2->setAge(15);
    v2->setName("kabir");
    v2->display();


    Voter *v3 = new Voter;
    v3->setAge(35);
    v3->setName("faysal");
    v3->display();


    Voter *v4 = new Voter;
    v4->setAge(12);
    v4->setName("sani");
    v4->display();



    //output:
    //    all eligible voter lists:
    //
    //    name : rafi
    //    age: 20
    //
    //    name : faysal
    //    age: 35
}
