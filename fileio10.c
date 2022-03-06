#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windowsx.h>
#define SIZE 1000
struct student
{
    char name[30];
};
int main()
{
  char data[SIZE];
  FILE *fp;
  fp = fopen("E:\file2.txt", "w");
  if(fp == NULL)
  {
      printf("\nFile could not be created.");
      exit(1);
  }
  printf("\nEnter the name of the student that you wish to be recorded.");
  fgets(data, SIZE, stdin);
  fputs(data, fp);
  fclose(fp);
  printf("\nFile has been created and saved successfully.");
}
