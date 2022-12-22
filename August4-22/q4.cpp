//.Write a program in C++ to create overloaded function area to compute area of circle,
//rectangle  and square.
#include <iostream>
#include <math.h>
using namespace std;
void area(float r)
{
    float a=3.14*pow(r,2);
    cout << "\nArea of the circle : " << a << endl;
}
void area(int  l, int  b)
{
    float a=l*b;
    cout << "\nArea of the rectangle: " << a << endl;
}
void area(char x,float s)
{
    cout << "\nArea of the square: " << s*s << endl;
}
int main()
{
    area(5.0f);
    area(4,3);
    area('s',7.0f);
    return 0;
}