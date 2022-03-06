#include<iostream>
#include<stdio.h>
using namespace std;
void xgets(char *a)
{
  scanf("%s", &a);
}
void xputs(char *a)
{
    printf("%s\n", a);
}

int main()
{
  char a;
  char *str;
  str = &a;
  cout<<"\nEnter a string.\n";
  xgets(str);
  cout<<"\nYour string is : \n";
  xputs(str);
  return 0;
}
