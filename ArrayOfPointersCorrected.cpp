#include<iostream>
#include<string.h>
using namespace std;
void replace(char *s, char s1[80], char s2[80]);
int main()
{
    char *str[]
    {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };
    char str1[80], str2[80];
    int i;
    for(i=0; i<6; i++)
    {
        cout<<"\t"<<*(str + i);
    }
    cout<<"Enter the word to search: ";
    gets(str1);
    cout<<"\n\nEnter the word to replace: ";
    gets(str2);
    cout<<"\nBefore modification:\n\n";
    for(i=0; i<6; i++)
    {
        cout<<"\t"<<*(str + i);
    }
    cout<<"\nAfter modification:\n\n";
    for(i=0; i<6; i++)
    {
        replace(*(str1+i), str1, str2);
    }
    return 0;
}
void replace(char *s, char s1[80], char s2[80])
{
  int i=0;
  int j=0;
  int k=0;
  char temp[100], temp2[100], main[100], *t = temp;
  //Copying to temporary string
  while(*s!='\0')
  {
      *t = *s;
      t++;
      s++;
  }
  *t = '\0';
  //Checking each word
  while(temp[i]!='\0')
  {
      temp2[j] = temp[i];
      if(temp[i] == ' ')
      {
          temp2[j] = '\0';
       if(strcmpi(temp2, s1)==0)
       {
           strcpy(temp2,s2);
       }
     j=0;
     while(temp2[j]!='\0')
     {
         main[k] = temp2[j];
         j++;
         k++;
     }
     main[k] = ' '; //adiing space after each word is copied
     k++; //increment so that next word won't overwrite the space
     j = -1;
      }
      i++;
      j++;
  }
  temp2[j] = '\0'; //last word terminated
  if(strcmpi(temp2,s1) == 0) //checking last word too
  {
      strcpy(temp2, s2);
  }
  //last word of the string
  while(temp2[j]!='\n')
  {
      main[k] = temp2[j];
      j++;
      k++;
  }
  main[k] = '\0';
  cout<<"\t"<<main<<"\n";
 }

