#include<stdio.h>
int main()
{
    int a;
    printf("Enter any integer\n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        printf("I am in Case 1\n");
        break;
    case 2:
        printf("I am in case 2\n");
        break;
    case 3:
        printf("I am in case 3\n");
        break;
    default:
        printf("Case not found\n");
    }
    return 0;
}
