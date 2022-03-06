//INCOMPLETE
#include<iostream>
#include<string.h>
//#define THEMAX 200;
using namespace std;
struct Custom
    {
        int an;
        char name[30];
        float bal;
    };
void printBal(struct Custom);
void withdraw(struct Custom);
int main()
{
    int i;
    struct Custom cust[200];
    cout<<"Enter the details of the customers : \n";
    for(i=0; i<200; i++)
    {
      cout<<"Enter the account number : \n";
      cin>>cust[i].an;
      cout<<"Enter the name of the customer : \n";
      cin>>cust[i].name;
      cout<<"Enter the account balance : \n";
      cin>>cust[i].bal;
    }
    printBal(cust);
    withdraw(cust);
}
void printBal(struct Custom cust)
{
    int j;
    for(j=0; j<200; j++)
    {
        if(cust[j].bal < 100.00)
        {
            cout<<"Details of the customer with balance less than 100 : \n";
            cout<<"Account Number : \n"<<cust[j].an<<endl;
            cout<<"Name of account holder : \n"<<cust[j].name<<endl;
        }
    }
}
void withdraw(struct Custom cust)
{
    bool k;
    int p;
    float dep;
    float with;
    for(p=0; p<200; p++)
    {
    cout<<"Press 1 for deposit and 0 for withdrawal : \n";
    cin>>k;
    if(k==1)
    {
        cout<<"Enter the amount you wish to deposit in your account : \n";
        cin>>dep;
        cust[p].bal += dep;
        cout<<"Rs "<<dep<<" deposited in your account.\n";
        cout<<"Your balance is : \n"<<cust[p].bal<<endl;
    }
    if(k == 0)
    {
       if(cust[p].bal < 100)
       {
           cout<<"The balance is insufficient for the specified withdrawal.\n";
       }
       else
       {
           cout<<"Enter the amount you would like to withdraw.\n";
           cin>>with;
           cust[p].bal -= with;
           cout<<"Rs "<<with<<" withdrawn from your account.\n";
           cout<<"Your balance is : \n"<<cust[p].bal;
       }
    }
    }
}
