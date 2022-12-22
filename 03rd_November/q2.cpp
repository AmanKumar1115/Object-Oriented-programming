/*Q2) wap to create a class length that stores the length unit in feet and inches input the total length in
inches at the time of creation of the object
1)assign the length value of the respective object to a system defined unit that stores the length in feet and
print the output
2)assign the total length unit that is store in a system defined varible to the object by using the necessary
conversion funtion and display the length in feet and inches
 hint: add all the constructors and destructors  */

#include <iostream>
using namespace std;

class length
{
private:
    int feet;
    int inches;

public:
    length()
    {
        feet = 0;
        inches = 0;
    }
    length(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void input()
    {
        cout << "Enter the length in feet" << endl;
        cin >> feet;
        cout << "Enter the length in inches" << endl;
        cin >> inches;
    }
    void display()
    {
        cout << "The length in feet is " << feet << endl;
        cout << "The length in inches is " << inches << endl;
    }
    operator int()
    {
        return feet * 12 + inches;
    }
    void operator=(int f)
    {
        feet = f / 12;
        inches = f % 12;
    }
};

int main()
{
    length l1;
    l1.input();
    l1.display();
    int f = l1;
    cout << "The length in inches is " << f << endl;
    l1 = 100;
    l1.display();
    return 0;
}
