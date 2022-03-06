//Takes somethong returns something
#include<stdio.h>
int add(int,int);
main()
{
 int x,y,s;
 printf("Enter Two Numbers");
 scanf("%d%d, &x,&y");
 s=add(x,y);
 printf("The Sum Is %d", s);
}
int add(int a, int b)
{
 int c;
 c=a+b;
 return(c);
}
