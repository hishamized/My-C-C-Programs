#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void add_info(char*, char*);
void display(char*);
void disbys(int, char*);
int main()
{
    disbys(1, "students.txt");
    _getch();
    return 0;
}
void add_info(char *name, char *file)
{
    FILE *fp;
    fp = fopen(file, "r+");
    if(fp == NULL)
        fopen(file, "w");
    fseek(fp, 0, SEEK_END);
    fputs(name, fp);
    putc('\n', fp);
    fclose(fp);
}
void display(char *file)
{
    FILE *fp;
    char name[30];
    fp = fopen(file, "r");
    if(fp == NULL)
    {
        printf("\nThe file could not be opened or does not exist in the first place.");
    }
    while(fscanf(fp, "%s", name) != -1)
    {
        puts(name);
    }
    fclose(fp);
}
void disbys(int num, char *file)
{
    FILE *fp;
    int i;
    char name[30];
    fp = fopen(file, "r");
    if(fp == NULL)
    {
        printf("\nThe file could not be opened or does not exist in the first place.");
        _getch();
        exit(1);
    }
    for(i=1; fscanf(fp, "%s", name) != -1; i++)
    {
        if(i==num)
        {
            switch(num)
            {
            case 1:
                printf("\n%dst name is : ", num);
                break;
            case 2:
                printf("\n%dnd name is : ", num);
                break;
            case 3:
                printf("\n%drd name is ", num);
                break;
            case 4:
                printf("\n%dth name is ", num);
            }
            printf("%s\n\n", name);
        }
    }
    if(fscanf(fp, "%s", name) == -1)
    {
        printf("\nThere are only %d names.", i);
    }
    rewind(fp);
    while(fscanf(fp, "%s", name) != -1)
    {
        if(name[0] == 'S' || name[0] == 's')
            puts(name);
    }
    fclose(fp);
}
