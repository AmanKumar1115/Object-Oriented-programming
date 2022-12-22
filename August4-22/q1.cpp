//1.Write a program in C++ that uses the reference variable concept and demonstrate the function 
//pass by reference method
#include <iostream>
using namespace std;
int add(int *p,int *q)
{
    return *p+*q;
}
int main()
{
    int a,b;
    cout << "\nEnter the value of a and b:\n" ;
    cin  >> a>> b;
    
    int k=add(&a,&b);
    printf("Sum=%d",k);
}
