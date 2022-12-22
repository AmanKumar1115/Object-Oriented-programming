/*1. Write a program to create a structure that stores the name,roll and 3 subject
marks of a student. Input the details of a student and display all the details
along with average mark by calling a user defined function where the structure variable is passed as an argument.*/
///////////////////////////////
/*2. In the student structure mentioned in question 1 input the details of two students.Write a user defined
function that compares between the two students and returns the details of that student who has scored the
higher average mark. Display all the details that student after receiving the return value*/
#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    float marks[3];
    float avg;
    int totalmarks;
};
void details(student s1[], int n)
{
    cout << "\nEnter details of the student: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of student " << i + 1 << ": \n";
        cin >> s1[i].name;
        cout << "\nEnter roll_no of student " << i + 1 << ": \n";
        cin >> s1[i].roll_no;
        cout << "\nEnter marks of  student in 3 subject one by one " << i + 1 << ": \n";
        s1[i].totalmarks=0;
        for (int j = 0; j < 3; j++)
        {
            cin >> s1[i].marks[j];
            s1[i].totalmarks = s1[i].totalmarks + s1[i].marks[j];
        }
        
        s1[i].avg = s1[i].totalmarks / 3;
    }
    cout << "\n Showing details of each student:\n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "\nName:" << s1[i].name << "\nRoll Number:" << s1[i].roll_no ;
        cout << "\nTotal marks: " << s1[i].totalmarks;
        cout << "\n Marks in each subject: \n";
        for (int j = 0; j < 3; j++)
        {
            cout << s1[i].marks[j]<< " ";
        }
        cout << "\nAverage marks:" << s1[i].avg;
    }
}
student compare(student s2[])
{
    if (s2[1].avg > s2[0].avg)
        return s2[1];
    else
       return s2[0];
}
int main()
{
    /*int n;
    cout << "Enter the number of student you want n :\n";
    cin >> n;
    student s1[n];
    details(s1, n);
    cout << "\n__________________________________________For Question2_____________________________________\n";*/
    student s2[2];
    cout << "\nEnter details of the student: \n";
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter name of student " << i + 1 << ": \n";
        cin >> s2[i].name;
        cout << "\nEnter roll_no of student " << i + 1 << ": \n";
        cin >> s2[i].roll_no;
        cout << "\nEnter marks of  student in 3 subject one by one " << i + 1 << ": \n";
        s2[i].totalmarks=0;
        for (int j = 0; j < 3; j++)
        {
            cin >> s2[i].marks[j];
            s2[i].totalmarks = s2[i].totalmarks + s2[i].marks[j];
        }
        cout << "\nTotal marks: " << s2[i].totalmarks;
        s2[i].avg = s2[i].totalmarks / 3;
    }
    student s3=compare(s2);
    cout << "\nStudent with greater avg:\n";
    cout << "\nName:" << s3.name << "\nRoll Number:" << s3.roll_no ;
    cout << "\n Marks in each subject: \n";
    for (int j = 0; j < 3; j++)
    {
        cout << s3.marks[j] <<" ";
    }
    cout << "\nAverage marks:" << s3.avg;
}