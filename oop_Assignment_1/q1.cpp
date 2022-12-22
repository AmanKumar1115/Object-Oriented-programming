/*Q.1 Write a program to create class “basic” that stores the loan amount in rupees.
Create another class “interest” that stores the number of years and rate of interest as
its private data member. Calculate the simple interest and compound interest after
providing input by using necessary function.*/
#include <iostream>
#include <math.h>
using namespace std;
class interest; // forward declaration
class basic
{
    float loan;

public:
    void getloan()
    {
        cout << "\nEnter the loan amount:";
        cin >> loan;
    }
    friend class interest;
};
class interest
{
    float years, interest_rate;

public:
    void get_time_interest()
    {
        cout << "\nEnter duration in years and interest rate:";
        cin >> years >> interest_rate;
    }
    float SI(basic t)
    {
        float i = (t.loan * interest_rate * years) / 100;
        return i;
    }
    float compound(basic t)
    {
        float ci = t.loan * (pow( (1 + interest_rate * 0.01), years) - 1);
        return ci;
    }
};
int main()
{
    basic a;
    a.getloan(); // Enter loan amount
    interest b;
    b.get_time_interest(); // Enter time and interest rate
    cout << "\nSimple Interest : " << b.SI(a) << endl;
    cout << "\nCompound Interest : " << b.compound(a);
}
