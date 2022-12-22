// WAP to create  a class to store the name, class, roll no, age, of a student.
// Derive a class mark from student which stores the three subject marks and the respective avg marks.
//  1. Initialise the details at the time of creation of the object by taking input from the user
//  2. The details have to be made input by explicitly calling the base class parameter constructor

#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int roll_no, age;

public:
    student(int k)
    {
        cout << "Enter name :";
        cin >> name;
        cout << endl
             << "Enter roll number :";
        cin >> roll_no;
        cout << endl
             << "Enter age :  ";
        cin >> age;
    };
    
};
class marks : public student
{
    float mark[3];
    float avg;

public:
    marks(int x) : student(x)
    {
        float tm = 0;
        cout << endl
             << "Enter Marks :";
        for (int i = 0; i < 3; i++)
        {
            cin >> mark[i];
            tm = mark[i] + tm;
        }
        avg = tm / 3;
    }
    void show()
    {
        cout << "Name :" << name << endl
             << "Roll number: " << roll_no << endl
             << "age :" << age << endl
             << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << mark[i] << "\t";
        }
        cout << endl
             << "Average :" << avg << endl;
    }
};
int main()
{
    marks s(6) ;
    s.show();
    return 0;
}
