#include<stdio.h>
main()
{
 int A[3][3],B[3][3],C[3][3],i,j;
 printf("Enter 9 numbers for first matric");
  for(i=0;i<=+2;i++)
   for(j=0;j<=2;j++)
    scanf("%d",&A[i][j]);
 printf("Enter 9 numbers for second matric");
 for(i=0;i<=+2;i++)
   for(j=0;j<=2;j++)
    scanf("%d",&B[i][j]);
  for(i=0;i<=2;i++)
  {
   for(j=0;j<=0;j++)
   {
    C[i][j]=A[i][j]+B[i][j];
    printf("%d",C[i][j]);
   }
   printf("\n");
  }
   getch();
}
