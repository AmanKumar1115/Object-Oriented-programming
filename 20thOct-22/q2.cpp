/*WAP to justify overloading of logical and member function and bitwise and using friend function.*/
#include <iostream>
using namespace std;

class num
{
    int i, j;

public:
    num()
    {
        cout << "Enter i and j :";
        cin >> i >> j;
    }
    void operator&&(num k)
    {
        i = i && k.i;
    }
    friend void operator&(num &k, num l);
    void show()
    {
        cout << "\nValue of i  : " << i << endl;
        cout << "Value of j  : " << j << endl;
    }
};
void operator&(num &k, num l)
{
    k.j = k.j & l.j;
}
int main()
{
    num n1, n2;
    cout<<"\n Before Overloading : ";
    n1.show();
    n2.show();
    n1 &&n2;
    n1 &n2;
    cout<<"\n After Overloading : ";
    n1.show();

    return 0;
}