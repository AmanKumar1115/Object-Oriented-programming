/*4. WAP to create a class test that stores the number of units of an item and price of each unit in rupees .Input
 details for two units . Overload the greater than or equal to  operator which compares between the total price of the two
   instances and returns the property of that instance who is having higher total value. Otherwise simply
displays equal value when the total value is found to be same.*/

#include <iostream>
using namespace std;

class test
{
    int unit;
    int rate;
    int total_price;

public:
    void get()
    {
        cout << "Enter the units :";
        cin >> unit;
        cout << endl
             << "Enter rate: ";
        cin >> rate;
        total_price = unit * rate;
    }

    test operator>=(test k)
    {
        if (total_price >= k.total_price)
        {
            return *this;
        }
        else
        {
            return k;
        }
    }

    void show()
    {
        cout << "\nUnit : " << unit << endl
             << " Rate : " << rate << endl
             << "Total Price : " << total_price;
    }
};

int main()
{
    test t1, t2, t3;
    t1.get();
    t2.get();

    t3 = t1 >= t2;

    cout << "\n\nObject having higher total price is : ";
    t3.show();
}