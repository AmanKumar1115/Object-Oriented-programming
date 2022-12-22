/*Q.2) Write a program to create a class student that stores roll number,name and
average mark of a student. Overload the new operator to allocate memory and then
overload post decrement operator to increase the average mark and display all the
details.*/

#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
	string name;
	int roll;
	float avg;

public:
	student()
	{
		cout << "Constructor is called\n";
	}
	student(string name, int roll, float avg)
	{
		this->name = name;
		this->roll = roll;
		this->avg = avg;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Roll no. :" << roll << endl;
		cout << "Average: " << avg << endl;
	}
	friend student operator--(student &k);
	// void * operator new(size_t size)
	// {
	// 	cout<< "Overloading new operator with size: " << size << endl;
	// 	void * p = ::operator new(size);

	// 	return p;
	// }
	void *operator new(size_t size)
	{
		void *p = malloc(size);
		return p;
	}

	void operator delete(void *p)
	{
		cout << "Overloading delete operator " << endl;
		free(p);
	}
};
student operator--(student &k)
{
	student n;
	n.avg = k.avg--;
	return n;
}
int main()
{
	student *p = new student("Rio", 21051115, 90.00);
	p->display();
	student s("Naman", 21051487, 95.00);
	s.display();
	cout << "Post Decrement using friend: " << endl;
	s = operator--(s);
	s.display();
	delete p;
	return 0;
}