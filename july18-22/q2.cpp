#include <iostream>
using namespace std;
struct first
{
    string name;
    int roll_no;
    float marks[5];
    int totalmarks;
    float p;
};
void percentage(struct first student[], int n)
{
    for (int i = 0; i < n; i++)
    {
        student[i].totalmarks = 0;
        student[i].p = 0.0;
        for (int j = 0; j < 5; j++)
        {
            student[i].totalmarks = student[i].totalmarks + student[i].marks[j];
            if (j == 4)
                student[i].p = (student[i].totalmarks * 100) / 500;
        }
    }
}
void display_roll(first student[], int r, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (student[i].roll_no == r)
        {
            cout << "\nName:" << student[i].name << "\nRoll Number:" << student[i].roll_no << endl;
            cout << "\n Marks in each subject: \n";
            for (int j = 0; j < 5; j++)
            {
                cout << student[i].marks[j] << endl;
            }
            cout << "\nTotal marks:" << student[i].totalmarks << "\nPercntage: "
                 << student[i].p << endl;
            c++;
            break;
        }
    }
    if (c == 0)
        cout << "\nEntered Roll Number is not found!!!!!!!\n"
             << endl;
}
void display_percentage(first student[], int n)
{
    cout << "\nEnter the percentage range lower limit followed by upper limit:\n";
    int lower_limit, upper_limit, c = 0;
    cin >> lower_limit >> upper_limit;
    for (int i = 0; i < n; i++)
    {
        if (student[i].p > lower_limit && student[i].p < upper_limit)
        {
            cout << "\nName:" << student[i].name << "\nRoll Number:" << student[i].roll_no << endl;
            cout << "\n Marks in each subject: \n";
            for (int j = 0; j < 5; j++)
            {
                cout << student[i].marks[j] << endl;
            }
            cout << "\nTotal marks:" << student[i].totalmarks << "\nPercntage: "
                 << student[i].p << endl;
            c++;
        }
    }
    if (c == 0)
        cout << "\nThere are no student in the given percentage range\n"
             << endl;
}
void sort(struct first student[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(student[j].totalmarks >student[j+1].totalmarks)
            {
                first s = student[j];
                student[j]=student[j+1];
                student[j+1]=s;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n :\n";
    cin >> n;
    first student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of student " << i + 1 << ": \n";
        cin >> student[i].name;
        cout << "\nEnter roll_no of student " << i + 1 << ": \n";
        cin >> student[i].roll_no;
        cout << "\nEnter marks of  student in five  subject one by one " << i + 1 << ": \n";
        for (int j = 0; j < 5; j++)
            cin >> student[i].marks[j];
    }
    percentage(student, n);
    cout << "\nEnter the roll_no whose data is to be searchd :\n";
    int r;
    cin >> r;
    display_roll(student, r, n);
    display_percentage(student, n);
    sort(student, n);
    cout << "\nMarks of Each student after sorting: \n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\nName:" << student[i].name;
        cout << "\nRoll Number:" << student[i].roll_no << endl;
        cout << "\nMark:" << student[i].totalmarks << endl;
    }

    return 0;
}