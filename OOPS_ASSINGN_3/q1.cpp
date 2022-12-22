/*Q1) Write a program to overload the insertion and extraction operator.*/
#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    int roll;
    int avg_marks;
    public:
    friend istream& operator>>(istream&k,student&l)
    {
        k>>l.name;
        k>>l.age;
        k>>l.roll;
        k>>l.avg_marks;
        return k;  
    }
    friend ostream& operator<<(ostream&k,student&l)
    {
        k<<"Name : ";
        k<<l.name;
        k<<"\nAge : ";
        k<<l.age;
        k<<"\nRoll : ";
        k<<l.roll;
        k<<"\nAverage Marks : ";
        k<<l.avg_marks;
        return k;  
    }
};
int main()
{
    student s;
    cout<<"Enter the name, age, roll and average marks respectively: ";
    cin>>s;
    cout<<s;

}