#include<iostream>
using namespace std;
void action(int, int, int);
void below100();
struct custom
{
    int accnum;
    char name[30];
    int bal;
}
sbi[200] = {1, "Siraj", 10000000, 2, "Azad", 123434, 3, "Ahmed", 99, 4, "Rehan", 55, 5, "Yamin", 20000
};
int main()
{
 int acc_num, amount, code;
 cout<<"Enter your account number : "<<endl;
 cin>>acc_num;
 cout<<"\n Enter 1 for withdrawal and 0 for deposition.\n";
 cin>>code;
 if(code == 1)
 {
     cout<<"\n Enter the amount you would like to withdraw. \n";
     cin>>amount;
 }
 else
 {
     cout<<"\nEnter the amount you would like to deposit\n";
     cin>>amount;
 }
 action(acc_num, amount, code);
 cout<<"\nThe account holders with balance less than 100 Rs are : \n";
 below100();
 return 0;
}
void below100()
{
    int i;
    //cout<<"The account holders with balance less than 100 are : "<<endl;
    for(i=0; i<200; i++)
    {
        if(sbi[i].bal < 100 && sbi[i].bal > 0)
        {
            cout<<"Name : "<<sbi[i].name<<endl;
            cout<<"Account Number : "<<sbi[i].accnum;
        }
    }
}
void action(int acc_num, int amount, int code)
{
    int i;
    for(i=0; i<200; i++)
    {
        if(sbi[i].accnum == acc_num)
            break;
        if(code == 1)
        {
            if(sbi[i].bal - amount < 100)
            {
                cout<<"\n The account has insufficient balance for any kind of withdrawal to take place.";
                return;
            }
            else
            {
                sbi[i].bal = sbi[i].bal - amount;
                cout<<"\n You have withdrawn Rs : "<<amount<<endl;
                cout<<"\n Your new account balance is : "<<sbi[i].bal;
            }
        }
        else
        {
            sbi[i].bal = sbi[i].bal + amount;
            cout<<"\n You have deposited Rs : "<<amount<<endl;
            cout<<"\n Your new account balance is Rs : "<<sbi[i].bal;
        }
    }
}
