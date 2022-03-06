#include<stdio.h>
#inlcude<conio.h>
#include<math.h>
int main()
{
 float p,q,r,n,a;
 int i;
 //for 10 sets we have to create a for loop
 for(i=1;i<=10;i++)
 {
   printf("Set: %d\n",i);
   //accept the values from user
   printf("enter principal");
   scanf("%f, &p");
   printf("enter rate");
   scanf("%f", &r);
   printf("enter time in years");
   scanf("%f", &n);
   printf("enter compound: ");
   scanf("%f", &q);

   //formula
   a = p*(pow((1+r/q),n*q));
   printf("Amount: %f",a);



 }

}
