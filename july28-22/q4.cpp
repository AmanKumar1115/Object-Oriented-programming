/*WRITE A PROGRAM TO CREATE A CLASS STUDENT HAVING NAME,ROLL,AGE,SECTION-NAME AND 5 SUBJECT MARKS 
OF A STUDENT.INPUT THE DETAILS OF 3 STUDENTS AND DISPLAY ALL THE DETAILS ALONG WITH AVERAGE MARK 
USING NECESSARY MEMBER FUNCTIONS.aLSO USE ONE OF THE FUNCTIONS AS A NON INLINE FUNCTION.*/
#include <iostream>
using namespace std;
class student 
{
    string name,section_name;
    int roll,age,marks[5];
    float avg;
    public:
    void input()
    {
        cout <<"\nEnter name:\n";
        cin >> name;
        cout << "\nEnter section_name:\n";
        cin >> section_name;
        cout <<"\nEnter roll:\n";
        cin >> roll;
        cout << "\nEnter age\n";
        cin >> age;
        cout << "Enter marks in 5 subject:\n";
        for(int i=0;i<5;i++)
        cin >> marks[i];
    }
    void average()
    {
        int t=0;
        for(int i=0;i<5;i++)
        {
            t=t+marks[i];
        }
        avg = t/5;    
    }
    void display();
};
void student::display()
{
    cout << "\nDetails of student \n";
    cout << "Name:" << name << endl;
    cout << "Section_name:" << section_name << endl;
    cout << "Roll number:" << roll << endl;
    cout << "Age:" << age << endl;
    cout <<"marks:\n" ;
    for(int i=0;i<5;i++)
    cout << marks[i] << endl;
    cout <<"\nAverage Marks" << avg;
}
int main()
{
    student s1;
    s1.input();
    s1.average();
    s1.display();
}