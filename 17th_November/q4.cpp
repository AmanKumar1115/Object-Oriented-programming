/*4. WAP to create a function template to swap 2 numbers. */
#include <iostream>
using namespace std;
template <class T>
void swapnumber(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the value of x and y :";
    cin >> x >> y;
    cout  << "Before Swap:"<< endl <<  "x = " << x << endl << "y = " << y;
    swapnumber(x,y);
    cout  << "\nAfter Swap:"<< endl <<  "x = " << x << endl << "y = " << y;
    return 0;
}