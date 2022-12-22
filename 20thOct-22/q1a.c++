/*WAP to create a class test having the mark of the student overload the unary minus using member  function
and friend function .Justify the overloading of unary minus operator*/
//USING MEMBER FUCNTION
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
    mark operator-()
    {
        this->m = -this->m;
        return *this;
    }
    void show()
    {
        cout << "\nMark : " << m;
    }
};
int main()
{
    mark a;
    cout << "Before overloading :";
    a.show();
    -a;
    cout << endl
         << "After overloading :";
    a.show();

    return 0;
}