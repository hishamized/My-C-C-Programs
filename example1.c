#include<stdio.h>
int main()
{
    int z;
    z = 15;
    printf("\n%d\n", z);
    z&=3;
     printf("\n%d\n", z);
    z = 15;
    z^=3;
    printf("\n%d\n", z);
    z = 15;
    z|=3;
    printf("\n%d\n", z);
    return 0;
}
