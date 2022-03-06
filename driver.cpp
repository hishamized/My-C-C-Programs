#include<stdio.h>
int main()
{
 int a;
 int *p;
 p=&a;
 printf("Enter the number\n");
 scanf("%d",&a);
 if(a>=18 && a<=70)
 {
  printf("your age is %d you can drive\n");
  scanf("%d",&a);
 }
  else
  {
   printf("your age is %d you cannot drive\n");
   scanf("%d",&a);
  }
  return 0;

}
