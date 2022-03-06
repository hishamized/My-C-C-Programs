
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("\nEnter the number of elements that the array shall store (size of the array)\n");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the %d elements to be stored in the array.\n");
    for(i=0; i<= n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<= n-1; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nThe sum of the %d elements of your array is : %d", n, sum);
    return 0;
}

 //C program to find the sum of the elements of an array
 // Name : Syed Suwaid
// Enroll no. : 8711
 //Section : B
// Semester : 4th
// Branch : CSE
// Dated : 11 - 8 - 2021
// Submitted to : Mr Aadil Yousuf
// Subject : Analysis and design of algorithms
