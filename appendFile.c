#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *f1, *f2;
    char ch, buffer[10];
    f1 = fopen("E:\\file1.txt", "a+");
    if(f1==NULL)
    {
        printf("\nEither the file does not exist or cannot be opened.");
        exit(1);
    }
    f2 = fopen("E:\\file2.txt", "r+");
    {
        printf("\nEither the file does not exist or cannot be opened.");
        exit(1);
    }
    fseek(f1,0,SEEK_END);
    ch = fgetc(f2);
    while(ch != EOF)
    {
        fputc(ch, f1);
        fgetc(f2);
    }
    rewind(f1);
    while(fgets(buffer, 9, f1) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(f1);
    fclose(f2);
    _getch();
    return 0;
}
