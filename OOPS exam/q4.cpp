/*Q.4 Write a program to create a class “bank” that is having a member function that calculates simple interest on inputs
 of principal amount,number of years and rate of interest where rate of interest is default value as 8.5%. However the bank
 manager can increase the rate of interest by overloading binary plus (+) operator to update the value for a respective
 customer. The manager must also get notification if rate of interest is reduced and must manage with proper exception.*/
#include <iostream>
using namespace std;
class bank
{
    float principle, interest_rate;
    int time;

public:
    void getvalue()
    {
        cout <<endl <<  "Enter the principle ";
        cin >> principle;
        cout << endl << "Enter the time:";
        cin >> time;
    }
    float simple_interest(float interest_rate = 8.5)
    {
        int s = (principle*interest_rate*time)/100;
        return s;
    }
    void operator+(int k)
    {
        this->interest_rate = this->interest_rate+k;
    }
};
int main()
{
    bank c1;
    c1.getvalue();
    int j;
    cout << endl << "Enter the value of j";
    cin >>j;
    try
    {
        if(j < 0)
            throw  0;
        c1  + j;
    }
    catch(int k)
    {
        cout << endl << "Interst rate has been tried to decrease: " ;
    }
    cout << "Interest rate : " << c1.simple_interest();
    return  0;
}