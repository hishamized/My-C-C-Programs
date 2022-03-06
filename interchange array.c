#include<stdio.h>
#include<conio.h>
void main()
{
  int a[]={34,78,12,90,55,67,23,10,77,45}
  int i,temp,n=10;
  clrscr();
  printf("\narray before interchange is\n");
  for(i=0,i<n; i++)
  printf("\t%d,a[i]");

  for(i=0,i<n-1;i+=2)
  {
                   temp=a[i];
                   a[i]=a[i+1];
                   a[i+1]=temp;
  }

  printf("\n\nafter interchange array is\n");
  for(i=0,i<n;i++)
  printf("\t%d,a[i]");
  getc();
}
