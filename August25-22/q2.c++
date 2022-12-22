//write a program to create class employee having the name,age,id ,department name and monthly salary of the employee.
//Assign the value for two employee and display them 
//1>first emp details are input from the user keyboard at the time of creation 
//2>second emp details are also the input by the user from the keyboard where the details are dynamic initialied 
#include <iostream>
#include <string>
using namespace std;
class employee
{
    string name, department_name;
    int age,id,monthly_salary;
    public:
    employee()
    {
        
    }
    employee(int i)
    {
        cout << "\nFor emp1 :\n";
        cout << "\nEnter the name of the employee: ";
        cin >> name;
        cout << "\nEnter id:" ;
        cin >> id;
        cout << "\nEnter the department name : ";
        cin >> department_name;
        cout << "\nEnter monthly salary: ";
        cin >> monthly_salary;
        cout << "Age: " ;
        cin >> age;
    }
    void get()
    {
        cout << "\nFor emp2: ";
        cout << "\nEnter the name of the employee: ";
        cin >> name;
        cout << "\nEnter id:" ;
        cin >> id;
        cout << "\nEnter the department name : ";
        cin >> department_name;
        cout << "\nEnter monthly salary: ";
        cin >> monthly_salary;
        cout << "Age: " ;
        cin >> age;
    }
    void show()
    {
        cout << "Name: " << name << endl << "ID:" << id << "Age :"  << age << endl << "Department Name :" << department_name << endl 
        << "Monthly Salary: " << monthly_salary << endl ;   
    }
};
int main()
{
    employee emp1(1), emp2;
    emp2.get();
    cout  << "\nDetails of emp1: "; emp1.show();cout  << endl << "Details of emp2 :" ; emp2.show();

}