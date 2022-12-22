//2.Write a pogram to add one static and one non static data member to user defined class and access 
//them by static and non static member functions respectively.
#include <iostream>
using namespace std;
class abc
{
    int a;
    static int b;
    public:
    void get()
    {
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
    static void input()
    {
        cout<<"Enter the value of b ";
        cin>>b;
    }
    void add()
    {
        cout<<"The sum is "<<a+b;
    }
    void show()
    {
        cout<<"A is "<<a<<endl;
    }
    static void display()
    {
        cout<<"B is "<<b<<endl;
    }
};
int abc:: b;

int main()
{
    abc x;
    x.get();
    abc::input();
    x.show();
    abc::display();
    x.add();

}