/* BITWISE OPERATORS */
#include<stdio.h>
int main()
{
    int a = 12, b = 25;
    int c = 212, i;
    printf("\n BITWISE AND Output = %d", a&b);
    printf("\n BITWISE OR Output = %d", a|b);
    printf("\n BITWISE XOR Output = %d", a^b);
    printf("\n NOT OPERATOR on 35 : %d ", ~25);
    for(i=0; i<9; i++)
    {
       printf("\n Right shift to %d by %d is given as \t %d", c, i, c>>i);
    }
    for(i=0; i<9; i++)
    {
       printf("\n\n Left shift to %d by %d is given as \t %d", c, i, c<<i);
    }
    return 0;
}
