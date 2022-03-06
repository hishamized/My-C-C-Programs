#include<iostream>
#include<stdio.h>
using namespace std;
float getfloat()
{
    float num;
    char number[20];
    cout<<"\nEnter a numeric string.\n";
    scanf("%s", number);
    sscanf(number, "%f", &num);
    return num;
}
int main()
{
    float num;
    num = getfloat();
    printf("\nYou entered %f\n", num);
    return 0;
}
