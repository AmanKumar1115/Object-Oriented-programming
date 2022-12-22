/* 1.(i) WAP to create a class employee that stores the grade (A,B or C) and monthly salary of an employee. 
Overload the unary increment and decrement operator using member function and friend function respectively 
where the pre form of the unary operator is applied.
(ii) In the above example, perform the post decrement using friend function and pre increment using member 
function and display the values.*/

#include<iostream>
using namespace std;
class employee
{
	public:
	char grade;
	float salary;
	employee operator ++()
	{
		++salary;
		return *this;
	}
	friend employee & operator --(employee &k);
	friend employee operator --(employee &k, int l);
	void input()
	{
		cout<<"Enter Grade: ";
		cin>>grade;
		cout<<"Enter Salary: ";
		cin>>salary;
	}
	void show()
	{
		cout<<"Grade: "<<grade<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
employee & operator --(employee &k)
{
	--k.salary;
	return k;
}
employee operator --(employee &k, int l)
{
	employee n;
	n.grade='B';
	n.salary=k.salary--;
	return n;
}
int main()
{
	employee e;
	e.input();
	cout<<"Pre Increment: "<<endl;
	++e;
	e.show();
	cout<<"Pre Decrement using friend: "<<endl;
	operator --(e);
	e.show();
	cout<<"Post Decrement using friend: "<<endl;
	employee e2=operator --(e,5);
	e2.show();
	e.show();
	return 0;
}
