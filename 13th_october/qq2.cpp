#include <iostream>
#include <string>
using namespace std;

class library
{
    protected :
    string book,author;
    int pages;
    public : 
    virtual void input()=0;
    virtual void output()=0;
    virtual ~library()
    {
        cout << "\nBase class destructed!" << endl << endl;
    }
};
class publisher : public library
{
    protected :
    string publish;
    int year_publish;
    public :
    void input()
    {
        cout << "Enter name of book : ";
        cin >> book;
        cout << "Enter name of author : ";
        cin >> author;
        cout << "Enter total no. of pages : ";
        cin >> pages;
        cout << "Enter name of publisher and year of publication : " << endl;
        cin >> publish >> year_publish;
    }
    void output()
    {
        cout << "\nName of book : " << book << endl <<  "Name of author : " << author;
        cout << endl << "Total pages : " << pages << endl;
        cout << "Name of publisher : " << publish << endl << "Year of publishing : " << year_publish << endl;

    }
    ~publisher()
    {
        cout << "\nDerived class destructed!" 
        << endl;
    }
};

int main()
{
    library *obj = new publisher;
    obj->input();
    obj->output();
    delete obj;
    return 0;
}