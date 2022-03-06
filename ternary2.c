#include<stdio.h>
#define cutoff 52
int main()
{
    float score;
    char status;
    printf("Enter your competitive exam score\n");
    scanf("%f", &score);
    status = (score>=cutoff)?('P'):('F');
    printf("Your result is : %c", status);
    return 0;
}
