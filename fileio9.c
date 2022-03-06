#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
struct donors
{
    char name[20];
    char address[40];
    int age;
    int btype;
};
int main()
{
    struct donors e;
    FILE *fp;
    fp = fopen("file1.text", "r+");
    if(fp == NULL)
    {
        printf("\nFailed to open the file or the file does not exist.");
        exit(1);
    }
    printf("\nPrinting a list of all the donors with age less than 25 and blood type 2.\n");
    while(fread(&e, sizeof(e), 1, fp) == 1)
    {
      if(e.age < 25 && e.btype == 2)
      {
        printf("\nName of the donor : %s ", e.name);
        printf("\nAddress : %s ", e.address);
        printf("\nAge : %d ", e.age);
        printf("\nBlood Type : %d ", e.btype);
      }
    }
    fclose(fp);
    _getch();
    return 0;
}
