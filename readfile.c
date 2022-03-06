#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    int i = 1;
    fp = fopen("C:\\form.txt", "r+");
    if(fp == NULL)
    {
        puts("\nFile cannot be opened.");
        exit(1);
    }
    printf("%d.", i);
    i++;
    do
    {
        ch = fgetc(fp);
        if(ch == '.')
        {
            printf("%c",ch);
            if(fgetc(fp) == EOF)
            {
             continue;
            }
        printf("%d.",i);
        i++;
        continue;
    }
    printf("%c",ch);
   } while(ch != EOF);
   fclose(fp);
   _getch();
   return 0;
}
