#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    (age>=18)?(printf("You are eligible for the camping programme.\n")):(printf("You are not eligible for the camping programme.\n"));
    return 0;
}
