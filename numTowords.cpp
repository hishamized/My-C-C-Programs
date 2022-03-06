#include<iostream>
#include<string.h>
using namespace std;
int checkNum(char);
int main()
{
 char num[9];
 int i;
 cout<<"Enter a number consisting of 9 or less digits : \n";
 gets(num);
 for(i=0; num[i]!=0; i++)
 {
     checkNum(num[i]);
 }
}
int checkNum(char ch)
{
    switch(ch)
    {
    case '0':
        cout<<"Zero ";
        break;
    case '1':
        cout<<"One ";
        break;
    case '2':
        cout<<"Two ";
        break;
    case '3':
        cout<<"Three ";
        break;
    case '4':
        cout<<"Four ";
        break;
    case '5':
        cout<<"Five ";
        break;
    case '6':
        cout<<"Six ";
    case '7':
        cout<<"Seven ";
        break;
    case '8':
        cout<<"Eight ";
        break;
    case '9':
        cout<<"Nine ";
        break;
    }
    return 0;
}

