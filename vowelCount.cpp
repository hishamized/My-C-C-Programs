#include<iostream>
#include<string.h>
using namespace std;
int checkVowel(char);
int main()
{
    char sent[80]; //[] = "Please read this application and give me gratuity";
    int i, found = 0, counter = 0;
    cout<<"Enter a string : \n";
    gets(sent);
    cout<<"The occurences of two vowels are : \n";
    for(i=0; sent[i]!=0; i++)
    {
        if(checkVowel(sent[i])) //Returns 0
        {
            found++;
        }
        else
        {
            found = 0;
        }
        if(found == 2)
        {
            cout<<"\n"<<sent[i-1]<<"\t"<<sent[i]<<"\n";
            found = 1; //In case we have three vowels
            counter ++;
        }
    }
   cout<<"The total number of occurrences of two successive vowels are : \n";
   cout<<counter<<endl;
}
int checkVowel(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return 1;
        default:
            return 0;

    }
}
