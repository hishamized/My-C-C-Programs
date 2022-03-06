#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int float1;
    float a;
    a = 7.755;
    ch = '4';
    char j[8] = "KASHMIR";
 int arr[25],i,count=0,n;
 //clrscr();
 for(i=0;i<25;i++) //to scan 25 array elements
 {
  printf("\n Enter the %d Array elements",i);
  scanf("%d",&arr[i]);
 }
 printf("\n Enter element to be searched");
 scanf("%d",&n);
  for(i=0;i<25;i++) //to search elements
  {
   if(arr[i]==n)
   count++;
  }
  printf("\n The number [%d] found [%d] times in array",n,count);
  getch();
}
