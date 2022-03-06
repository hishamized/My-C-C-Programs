#include<iostream>
using namespace std;
int main()
{
    char num[16];
    int i, sum = 0;
    cout<<"Enter the 16 digit credit card number that you wish to be checked\n";
    cin>>num;
    for(i=0; i<16; i++)
    {
        num[i] -= 48;
        if((i%2))
        {
            sum = sum + num[i];
        }
        else
        {
            num[i] = num[i]*2;
            if(num[i] >= 10)
            {
                num[i] = num[i] - 9;
            }
             sum = sum + num[i];
        }
    }
   if(!(sum%10))
   {
       cout<<"This credit card number is VALID\n";
   }
   else
   {
       cout<<"This credit card number is INVALID\n";
   }
   return 0;
}
