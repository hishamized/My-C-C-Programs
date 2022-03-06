#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *str[] = {
                     "We will teach you how to...",
                     "Move a mountain",
                     "Level a building",
                     "Erase the past",
                     "Make a million",
                     "...all through C!"

    };
    char str1[50];
    int i,flag, a;
    flag = NOTFOUND;
    cout<<"Enter a string\n";
    cin>>str1;
    for(i=0; i<=6; i++)
    {
       a = strcmp(&str[i][0], str1);
       if(a==0)
       {
           cout<<"Yes, your string was embedded here\n";
           flag = FOUND;
           break;
       }
    }
    if(flag == NOTFOUND)
        cout<<"No, your string was not embedded here\n";
    return 0;
}
