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
  int a;
  printf("your age is %d you can drive\n",a);
 }
  else
  {
   int a;
   printf(" you cannot drive\n",a);
  }
  return 0;

}
