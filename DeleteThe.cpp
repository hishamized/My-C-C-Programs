#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char sent[6];
    int i;
    cout<<"Enter a sentence \n";
    for(i=0; i<6; i++)
    {
        cin>>sent[i];
    }
    for(i=0; sent[i]!=0; i++)
    {
     if(sent[i]==116 && sent[i+1]==104 && sent[i+2]==101 && sent[i+3]==32)
     {
       for(; sent[i+4]!=0; i++)
       {
           sent[i] = sent[i+4];

           sent[i] = '\0';
           i = -1;
       }
     }
    }
    cout<<"The string after deletion is given as : \n";
    for(i=0; sent[i]!='\0'; i++)
    {
        cout<<sent[i];
    }
    return 0;
}

