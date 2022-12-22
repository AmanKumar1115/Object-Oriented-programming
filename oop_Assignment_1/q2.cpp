/*Q.2 Write a program to create a class “student” that stores the name,roll, age of a
student. Create another class “mark” which stores the three subject marks and grade.
Input the details of a student by using necessary member function. Print all the details
by making a member function of “mark” class friendly to “student” class.*/

#include <iostream>
#include <string>
using namespace std;
class student;//forward declarartion
class mark
{
    int marks[4];
    char grade[4];
    public: 
    void get_grades()
    {
        cout << "\nEnter the marks and grade of the student: \n";
        for(int i=0;i<4;i++)
        cin >> marks[i] >> grade[i] ;
    }
    void show_grades(student);   
};
class student
{
    string name;
    int roll ,age;
    friend void mark::show_grades(student); 
    public:
    void getstd_info()
    {
        cout << "\nEnter the name of the student:" ;
        cin >> name ;
        cout << "\nEnter the roll number and age of the student:";
        cin >> roll >> age ;
    }   
};
void mark :: show_grades( student s1)
    { 
        cout << "\nName: " << s1.name << endl << "\nRoll number:" << s1.roll << "\nAge :" << s1.age << endl;
        cout << "\nMarks: ";
        for(int i=0;i<4;i++)
        cout << marks[i] << " " ;
        cout << "\nGrade: ";
        for(int i=0;i<4;i++)
        cout << grade[i] << "  ";
    }

int main()
{
    student std;
    std.getstd_info();
    mark m;
    m.get_grades();
    m.show_grades(std);
    return 0;
}