#include<stdio.h>
#include<conio.h>
  //Author: Mohammad Hisham
  //Purpose: Print the multiplication table of any number entered by the user
void main()

{
 //variable declaration
 int input, i, output;

 //read the data from the user
 printf("enter any number");
 scanf("%d,"&input);

 //logic
 for(i=1; i<=12; i++)
     printf("%d*%d*%d\n", input, i, output);
 getch();


}
