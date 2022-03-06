#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
using namespace std;
int compare(const void* a, const void* b);
struct cricketers
{
    float avrun;
    char name[30];
    int age;
    int notm;
}
india[MAX] = { 122, "Sachin Tendulkar", 30, 67,
97, "Virendra Sehwag", 35, 56,
66, "Irfan Pathan", 32, 45,
153, "Yusuf Pathan", 36, 21,
101, "Yuvaraj Singh", 32, 45,
};
int main()
{
    int i;
    qsort(india, 5, sizeof(struct cricketers), compare);
    for(i=0; i<5; i++)
    {
        cout<<"Name : "<<india[i].name<<endl;
        cout<<"Average Score : "<<india[i].avrun<<endl;
        cout<<"Age : "<<india[i].age<<endl;
        cout<<"Number of test matches played : "<<india[i].notm<<endl;
    }
    return 0;
}
int compare(const void* a, const void* b)
{
    return(*(int*)a - *(int*)b);
}

