#include<stdio.h>
int main()
{
 int a[10],b[10],i,j;
 printf("\nEnter Elements");
 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 for(i=0;j=9;j<10;i++;j--)
 {
     b[j]=a[i];
 }
   printf("\nReverse of array");
   for(i=0;i<10;i++)
       printf("\n%d,b[i]");
  return 0;
}
