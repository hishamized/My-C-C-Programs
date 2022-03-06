#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void sort_names(char**, int);
void swap(char*, char*);
int main()
{
    int i, j, tot_names;
    char ch = 'i', *help[30], name[50], *p;
    FILE *fp;
    fp = fopen("E:\\file1.txt", "r+");
    if(fp == NULL)
    {
        printf("\nFile could not be opened.");
        exit(1);
    }
    for(i=0; ch!=EOF; i++)
    {
        ch = fgetc(fp);
        for(j=0; ch!= '\n'; j++)
        {
            if(ch == EOF)
                break;
            name[j] = ch;
            ch = fgetc(fp);
        }
        name[j] = '\0';
        p = (char*)malloc(50);
        strcpy(p, name);
        help[i] = p;
    }
    tot_names = i-1;
sort_names(help, tot_names);
for(j=0; j<= tot_names; j++)
{
    puts(help[j]);
}
fclose(fp);
_getch();
return 0;
}
void swap_names(char *a, char *b)
{
    char temp[20];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
void sort_names(char** name_list, int tot_names)
{
    int i, j, k=0;
    for(i=0; i<= tot_names; i++)
    {
        for(j=0; j<= tot_names; j++)
        {
            for(k=0; name_list[i][k] == name_list[j][k]; k++);
            if(name_list[i][k] > name_list[j][k])
            {
                swap_names(name_list[j], name_list[k]);
            }
        }
    }
}
