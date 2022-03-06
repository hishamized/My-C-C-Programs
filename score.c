#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the total number of subjects.\n");
    scanf("%d", &n);
    int marks[n];
    int total = 0;
    int i;
    for(i=0; i<n; i++)
    {
        printf("Enter your marks obtained out of hundred in %d th subject", i+1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }
    int per = (total/n);
    printf("\nYour percentage score is : %d  \n", per);
    if(per > 33)
    {
        printf("PASSED!");
    }
    else
    {
        printf("FAILED!");
    }
    return 0;
}
