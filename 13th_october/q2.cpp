// WAP to create a class library that srores the details of a book like name of the book, name of the author and 
//number of pages
// Derive a class publisher that stores the name of the publisher and year of publication
// By using necessary function input and display the details by justifying run time binding.
// Deallocate all the respective memories after the details are displayed
#include <iostream>
using namespace std;
class library
{
protected:
    string name_book, name_author;
    int no_pages;

public:
    void get()
    {
        cout << "Enter book name: ";
        cin >> name_book;
        cout << endl
             << "Enter author name: ";
        cin >> name_author;
        cout << endl
             << "Enter number of pages: ";
        cin >> no_pages;
    }
};
class publisher : public library
{
    string name_publisher;
    int year_publisher;

public:
    void get()
    {
        cout << "Enter publisher name: ";
        cin >> name_publisher;
        cout << endl
             << "Enter year of the publication: ";
        cin >> year_publisher;
    }
    void show()
    {
        cout << "Book name : " << name_book <<  endl << "Auhtor name: " << name_author 
             << endl << "Number of pages : " << no_pages << endl << "Publisher name : " << name_publisher 
             << endl << "Year of publication: " << year_publisher ;
    }
};
int main()
{
    
}