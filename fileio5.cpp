#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *f1, *f2, *fp;
    char ch1 = 'a', ch2 = 'a';
    fp = fopen("file3.txt", "w");
    f1 = fopen("file1.txt", "r");
    if(f1 == NULL)
    {
        printf("\nFile could not be opened.");
        exit(1);
    }
    f2 = fopen("file2.txt", "r");
    if(f2 == NULL)
    {
        printf("\File could not be opened.");
        exit(1);
    }
    printf("\nThe process has been started.");
    while(1)
    {
        if(ch1 != EOF)
        {
            ch1 = fgetc(f1);
            while(ch1 != '.')
            {
                if(ch1 == EOF)
                    break;
                fputc(ch1, fp);
                ch1 = fgetc(f1);
            }
            if(ch1 != EOF)
                fputc('.', fp);
        }
        if(ch2 != EOF)
        {
            ch2 = fgetc(f2);
            while(ch2 != '.')
            {
                if(ch2 == EOF)
                    break;
                fputc(ch2, fp);
                ch2 = fgetc(f2);
            }
            if(ch2 != EOF)
                fputc('.', fp);
        }
        if(ch1 == EOF && ch2 == EOF)
            break;
    }
    printf("\nProcess has been completed.");
    _getch();
    return 0;
}
