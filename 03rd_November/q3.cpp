/*Q3) WAP to create a class employee that stores the name basic salary and the grade of an employee. Overload the
new operator to allocate memory and then store the value and also overload the delete operator to deallocate 
the memory and also add user defined constructor and destructor in the program. Using necessary conversion
function assigne the name of the employee to a system defined and display it. */

#include<iostream>
#include<stdlib.h>

using namespace std;
class employee
{
	string name;
	int bs;
    string gr;
public:
	employee()
	{
		cout<< "Constructor is called\n" ;
	}
	employee(string name, int bs, string gr)
	{
		this->name = name;
		this->bs = bs;
        this->gr = gr;
	}
	void display()
	{
		cout<< "Name:" << name << endl;
		cout<< "base salary:" << bs << endl;
        cout<<"Grade: "<<gr<<endl;
	}
	// void * operator new(size_t size)
	// {
	// 	cout<< "Overloading new operator with size: " << size << endl;
	// 	void * p = ::operator new(size);
	
	// 	return p;
	// }

	// void operator delete(void * p)
	// {
	// 	cout<< "Overloading delete operator " << endl;
	// 	free(p);
	// }
	void * operator new(size_t size)
    {
        cout << "Overloading new operator" << endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "Overloading delete operator!" << endl;
        free(p);
    }
};

int main()
{
	employee * p = new employee("Rio", 20000, "A");

	p->display();
	delete p;
	return 0;
}