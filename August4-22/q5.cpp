//5.Write a program in C++ to create overloaded function interest to compute simple interest
//and compound interest.
#include <iostream>
#include <math.h>
using namespace std;
void interest(float p,float t,float r )
{
    float si=(p*t*r)/100;
    cout << "\nSimple interest :" << si << endl;
}
void interest(double p ,double t ,double r)
{
    float ci= p * (pow( (1 + r * 0.01), t) - 1);
    cout << "\ncompound interest :" << ci << endl;
}
int main()
{
    interest(100.0f,5.0f,10.0f);
    interest(100.0,5.0,10.0);
}