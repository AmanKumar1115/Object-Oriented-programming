// WAP to create a class student having the details of the student like name, roll, age and 4 subject
// marks.Enter the details using necsessary member fuction.
// Display by calling friend function.
// use the  concept the array of object.
// Return the details of that student to other who is having higher avg marks using (1)member function and friend function.

#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int roll, age, mark[4];
    float total, avg;

public:
    void getdata()
    {
        cout << "\nEnter the name :";
        cin >> name;
        cout << "Enter the roll number ,age  :" << endl;
        cin >> roll >> age;
        cout << "\nEnter the mark in 4 subject:";
        total = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> mark[i];
            total = total + mark[i];
        }
        avg = total / 4;
    }

    friend void show(student, int);
    friend student compare(student k[], int n);
};
student compare(student k[], int n)
{
    student m = k[0];
    for (int i = 1; i < n; i++)
    {
        if (k[i].avg > k[i - 1].avg)
            m = k[i];
    }
    return m;
}
void show(student s1, int n)
{
    cout << "Roll number:" << s1.roll << endl;
    cout << "Name       :" << s1.name << endl;
    cout << "Age        :" << s1.age << endl;
    cout << "Mark in 4 subjects: ";
    for (int i = 0; i < 4; i++)
        cout << s1.mark[i] << " ";
    cout << "\nAverage    :" << s1.avg << endl;
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number of the student :"
         << endl;
    cin >> n;
    student s1[n];
    for (int i = 0; i < n; i++)
    {
        s1[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        show(s1[i], n);
    }
    student a = compare(s1, n);
    cout << "\nStudent with greatre average:\n";
    show(a, n);
}