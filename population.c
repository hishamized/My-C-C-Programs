#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 float pop=100000;
 //for loop for 10 years
 for(i=1;i<=10;i++)
 {
   pop = pop - pop*0.1; //10% of population
   printf("%d year: %d\n", i, (int)pop);
 }
}
