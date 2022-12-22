//Write  a program in C++ to justify the use of default arguments that computes the 
//simple interest with default rate of interest as 8.5%.
#include <iostream>
using namespace std;
float simple_interest(float p,int t, float r=8.5 )
{
    float SI=(p*r*t)/100;
    return SI;
}
int main()
{
    float p;int t;
    cout << "Enter the principal amount:\n" ;
    cin >> p;
    cout << "\nEnter the time in years:\n";
    cin >> t;
    cout << "\nUsing default rate to calculate S.I:\n";
    float a=simple_interest(p,t);
    cout << "\nSimple Interest:"<< a ; 
    cout  << "\nBy user passing value:\n";
    float b=simple_interest(p,t,10);
    cout << "\nSimple Interest:"<< b ;

}