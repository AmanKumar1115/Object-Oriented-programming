/*.write  a program to create a class employee having employee name, department name, id , monthly salary as
its member. Initialize the details by accepting input from keyboard and user defined parametrized constructor
function. Create a user defined copy constructor to copy the properties of one instance to another and display
the details by calling a friend function.*/
#include <iostream>
using namespace std;
class employee
{
    string name, dp_name;
    int id, monthly_salary;

public:
    employee()
    {
        cout << "\nZero Argument Constructor\n";
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\ndp_name: ";
        cin >> dp_name;
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "\nEnter monthly salary: ";
        cin >> monthly_salary;
    }
    employee(int ID)
    {
        cout << "\nParametrized constructor";
        cout << "\nEnter Name: ";
        cin >> name;
        cin.ignore();
        cout << "\ndp_name: ";
        cin >> dp_name;
        cin.ignore();
        id = ID;
        cout << "\nEnter monthly salary: ";
        cin >> monthly_salary;
    }
    employee(employee &e)
    {
        cout << "\nCopy Constructor" << endl ;
        name = e.name;
        id = e.id;
        monthly_salary = e.monthly_salary;
        dp_name = e.dp_name;
    }
    friend void show(employee);
    ~employee()
    {
        cout << "\nDestructor with id: " << id;
    }
};

void show(employee emp)
{
    cout << "\nName: " << emp.name
         << "\nDepartmemt Name :" << emp.dp_name
         << "\nID " << emp.id
         << "\nMonhtly Salary: " << emp.monthly_salary;
}
int main()
{
    employee a1;
    employee a2(123);
    employee a3(a1);
    show(a1);
    show(a2);
    show(a3);
    return 0;
}
