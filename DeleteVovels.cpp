#include<iostream>
#include<string.h>
using namespace std;
int checkVowel(char);
int main()
{
 char name[80], tname[80];
 int i, j=0;
 cout<<"Enter a sentence you wish to have vowels removed from : \n";
 gets(name);
 cout<<"You have entered : \n";
 puts(name);
 for(i=0; name[i]!='\0'; i++)
 {
     if(checkVowel(name[i]) == 0)
     {
         tname[j] = name[i];
     }
     j++;
 }
 tname[d] = '\0';
 cout<<"The sentence after vowel removal is : \n";
 puts(tname);
}
int checkVowel(char t)
{
    if(t == 'a' || t == 'A' || t == 'e' || t == 'E' || t == 'i' || t == 'I' || t == 'o' || t == 'O' || t == 'u' || t == 'U')
    {
        return 1;
    }
    else
        return 0;
}
