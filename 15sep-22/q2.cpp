/*2. considering  question 1 details, students and marks are two independent classes.
Derive a class "grade" from "student" and "marks" which is having grade as its member.
IF avgmark>90 (grade O) .....avg mark<90 and avg mark > 80 ( grade B) else assign grade as C.
Input the details and display all the details of a student.*/
#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string name, section;
    int roll_no;
};
class marks
{
protected:
    float mark[3];
    float avg;
};
class grades : public student, public marks
{
    char grade;

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
    void assign_grade()
    {
        if (avg >= 90)
            grade = 'A';
        else if (avg >= 80 and avg < 90)
            grade = 'B';
        else
            grade = 'C';
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
             << "Average :" << avg << endl
             << "Grade : " << grade << endl;
    }
};
int main()
{
    int s;
    cout << "Enter the number of the student: ";cin >> s;
    grades s1[s];
    for(int i=0;i<s;i++)
    {
        cout << endl << "Enter the details of the student "<< i+1<< ": "<< endl ;
        s1[i].get();
        s1[i].assign_grade();
    }
    for(int i=0;i<s;i++)
    {
        cout << endl << "Details of student " << i+1 << ": "<< endl ;
        s1[i].show();
        cout << endl << endl ;
    }


}