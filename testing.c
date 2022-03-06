/*#include<stdio.h>
int main()
{
    char buffer[50];
    int no = 97;
    double val = 2.34174;
    char name[10] = "Shweta";
    sprintf(buffer, "%d%lf%s",no,val,name);
    printf("%s\n",buffer);
    sscanf(buffer,"%4d%2.2lf%s",no,val,name);
    printf("%s\n",buffer);
    printf("%d%lf%s\n",no,val,name);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char text[15];
    sprintf(text, "%4d\t%2.2f\n%s",12,3.452,"Merry Go Round");
    printf("%s\n", text);
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
char p[] = "The sixth sick sheikh's sixth ship is sick";
int main()
{
    int i=0;
    while(p[i]!= '\0')
    {
        putchar(p[i]);
        i++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    printf("More often than \b\b not \rthe right person who\ wins is the one who thinks he can\n");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i = 2;
    float f = 2.5367;
    char str[] = "Life is like that";
    printf("%4d\t%3.3f\t%4s\n", i, f, str);
    return 0;
}*/
/*#include<stdio.h>
#include<ctype.h>
int main()
{
   char ch;
   ch = getchar();
   if(islower(ch))
    putchar(toupper(ch));
   else
    putchar(tolower(ch));
   return 0;
}*/
