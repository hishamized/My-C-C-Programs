#include<stdio.h>
void count(int []); //Function declaratiom
int main()
{
  int a[],i;
  printf("\n Enter 10 numbers");
  for(i=0;i<10;i++);
      scanf("%d",&a[i]);

  count(a); //function calling
  return 0;
}
void count(int a[])
{
  int i,c1=0,c2=0,c3=0;
  for(i=0;i<10;i++)
  {
    if(a[i]>0)
       c1++;
    else
       if(a[i]<0)
          c2++;
          else
            c3++;
}
printf("]\n Positive = %d\n Negative = %d\nzero = %d",c1,c2,c3);
}
