#include<iostream>
using namespace std;
void printByYear(int);
void printByRoll(int);
int main()
{
    struct students
    {
        int roll;
        char name[15];
        char dept[10];
        char course[10];
        int year;
    };
    struct students b[450];
    int i;
    cout<<"Enter the roll number, student's name, his/her department, his/her course and year of joining\n";
    for(i=0; i<450; i++)
    {
        cin>>b[i].roll;
        cin>>b[i].name;
        cin>>b[i].dept;
        cin>>b[i].course;
        cin>>b[i].year;
    }
    printByYear(b);
    printByRoll(b);
    return 0;
}
void printByYear(int year)
{
    int y, i;
    cout<<"Enter the year of joining of the student that you're looking for : \n";
    cin>>y;
    for(i=0; i<450; i++)
    {
        if(b[i].year == y)
        {
            cout<<"The details of the student are as follows : \n";
            cout<<b[i].roll<<"\t";
            cout<<b[i].name<<"\t";
            cout<<b[i].dept<<"\t";
            cout<<b[i].course<<"\t";
            cout<<b[i].year<<"\t";
        }
    }
}
void printByRoll(int roll)
{
    int r, k;
    cout<<"Enter the roll number of the student you're looking for \n";
    cin>>r;
    for(k=0; k<450; k++)
    {
        if(b[k].roll == r)
        {
            cout<<"The details of the student are as follows : \n";
            cout<<b[k].roll<<"\t";
            cout<<b[k].name<<"\t";
            cout<<b[k].dept<<"\t";
            cout<<b[k].course<<"\t";
            cout<<b[k].year<<"\t";

        }
    }
}
