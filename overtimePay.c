#include<stdio.h>
main ()
{
 int h,p,r;
 r=12;
 int i=1;
 while(i<=10)
  {
   printf("Enter the number of hours worked by employee above 40 hours");
   scanf("%d",&h);
   p=12*h;
   printf("The overtime pay is %d",&p);
   i=i+1;
   }
   return 0;
}
