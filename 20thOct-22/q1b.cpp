/*WAP to create a class test having the mark of the student overload the unary minus using member  function
and friend function .Justify the overloading of unary minus operator*/
//USING FRIEND FUCTION
#include <iostream>
using namespace std;
class mark
{
    int m;

public:
    mark()
    {
        cout << "Enter the marks :";
        cin >> m;
    }
    friend void operator-(mark &k);
    void show()
    {
        cout << "\nMark : " << m;
    }
};
void operator-(mark &k)
{
    k.m=-k.m;
}
int main()
{
    mark a;
    cout << "\nBefore overloading: ";
    a.show();
    operator-(a);
    cout << endl
         << "\nAfter overloading: ";
    a.show();
    return 0;
}