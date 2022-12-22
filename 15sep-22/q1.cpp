/*1.write a program to create a class student having the name , roll no., section name as its member.
Create another class marks which stores 3 subject marks and average mark of a student and is derived from student class.
Input the details of two students and display all the details.*/
#include <iostream>
#include <string>
using namespace std;
class student
{
protected:

    string name, section;
    int roll_no;
};
class marks : public student
{
    float mark[3];
    float avg;

public:
    void get()
    {
        float tm = 0;
        cout << "Enter name :";
        cin >> name;
        cout << endl
             << "Enter roll number :";
        cin >> roll_no;
        cout << endl
             << "Enter section :  ";
        cin >> section;
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
             << "Section :" << section << endl
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
    marks s[2];
    for (int i = 0; i < 2; i++)
    {
        s[i].get();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].show();
        printf("\n");
    }
    return 0;
}
