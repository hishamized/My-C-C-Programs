#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *f1, *f2;
    char str[50];
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file.txt", "w");
    while(fgets(str, 49, f1) != NULL)
    {
        _strupr(str);
        fputs(str, f2);
    }
    _getch();
    return 0;
}
