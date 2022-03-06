#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*int main()
{
    FILE *fp;
    char ch, bh;
    char ans = 'y';
    fp = fopen("E:\my programs\file1.txt", "r+");
    if(fp == NULL)
    {
        printf("\nThe file could not be opened.");
        exit(1);
    }
    printf("\nWriting and then encrypting content into the file.");
    printf("\Enter your text into the file and press full stop ('.') to exit.");
    while(ans != 'n')
    {
      while(ch != '.')
     {
        scanf("%c", &ch);
        ch = ch + 128;
        fputc(ch, fp);
     }
     printf("\nDo you wish to continue writing ? (y/n)");
     scanf("%c", ans);
    }
    printf("\nNow we shall perform decryption and then display the content of the file.");
    while(bh != EOF)
    {
        bh = fgetc(fp);
        bh = bh - 128;
        printf("%c", bh);
        bh = fgetc(fp);
    }
   fclose(fp);
   return 0;
}*/
int main()
{
    char ch;
    printf("\nEnter a character.");
    scanf("%c", &ch);
    ch = ch + 128;
    printf("\nAfter encryption : %c", ch);
    ch = ch - 128;
    printf("\nAfter decryption : %c", ch);
    _getch();
    return 0;
}
