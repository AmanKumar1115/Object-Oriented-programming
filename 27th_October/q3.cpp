/*
3. WAP to overload the assignment operator to assign the properties of one object to another.
Also, add the constructors and destructors to verify the
respective invocation. */

#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;
    string type;

public:
    student()
    {
        cout << "\nZero Argument Constructor Constructed";
    }
    student(student &k)
    {
        cout << "\nCopy Constructed Invoked";
        name = k.name;
        roll = k.roll;
    }

    void get()
    {
        cout << "\nEnter the name and roll: ";
        cin >> name >> roll;
    }

    void show()
    {
        cout << "\n Name : " << name << "\tRoll : " << roll;
    }

    void operator=(student x)
    {
        cout << "\nAssignment operator overloading invoked";
        name = x.name;
        roll = x.roll;
    }
    ~student()
    {
        cout << "\n"
             << type << " got Destructed";
    }
};

int main()
{
    student s1, s2;
    s1.get();
    s2 = s1;
    s2.show();
}