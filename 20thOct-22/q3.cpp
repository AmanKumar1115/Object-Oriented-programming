// 3. WAP a programm to create a class employee that stores the employee name,age and monthly salary .
//    Overload the binary plus operator
//    to add user defined incentive to the monthly salary and display it .
//    i. Object + incentive value
//    ii. Incentive value + Object

#include <iostream>
using namespace std;

class employee
{
    string name;
    int age;
    int month_salary;

public:
    employee()
    {
        cout << "Enter the name :";
        cin >> name ;
        cout <<endl << "Enter age :" ;
        cin >> age;
        cout <<endl << "Enter monthly salary :" ;
        cin >> month_salary ;
    }
    void operator+(int x)
    {
        month_salary += x;
    }
    friend void operator+(int x, employee &y);
    void show()
    {
        cout << "\nName: " << name << "\nAge : " << age << "\nMonthly salary : " << month_salary;
    }
};
void operator+(int x, employee &y)
{
    cout << "\nHelooo\n" ;
    y.month_salary += x;
}

int main()
{
    employee e;
    int k;
    cout << "Enter the incentive amount : ";
    cin >> k;

    cout << "Initial info : ";
    e.show();

    e + k;

    cout << "\n\n i. Object + incentive value:";
    e.show();

    k + e;
    cout << "\n\n ii. Incentive value + Object:";
    e.show();
}
