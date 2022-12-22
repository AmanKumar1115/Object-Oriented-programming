/*Q1)WAP to create a class rupee that stores the amount of rupees at its private data member create another 
class dollar that stores the respective amount in dollar as its private data member. Input the amount of dollar
from keyboard and convert the respective amount in rupees and store that value to the rupees class and display it
1) perform the respective conversion by writing the casting operator function
2) and also use the constructor method to perform the necessary conversion and display it.
 hint 1$=82.86 INR */


#include <iostream>
using namespace std;

class dollar;
class rupee
{
    int rup;
public:
    rupee(){};
    rupee(float k)
    {
        rup = k;
    };
    void show()
    {
        cout << "\nRupee: " << rup << endl;
    }
};
class dollar
{
    int dol;

public:
    dollar() 
    {
        cout << "\nEnter amount of dollar: ";
        cin >> dol;
    }
    operator rupee()
    {
        return rupee(82.86 * dol);
    }
};

int main()
{
    rupee r;
    dollar d;
    r = d;
    r.show();
    return 0;
}
