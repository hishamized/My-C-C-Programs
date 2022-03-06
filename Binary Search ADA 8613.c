
#include<stdio.h>
int karsaSearch(int arr[], int l, int r, int x)
{
    if(r >= l)
    {
        int mid = l + (r - 1) / 2;

        if(arr[mid] == x)
            return mid;
        if(arr[mid] > x)
            return karsaSearch(arr, l, mid - 1, x);
        return karsaSearch(arr, mid + 1, r, x);
    }
}
int main()
{
    int n, i, result, x;
     printf("\nEnter the number of elements you wish yo store in the array (size of the array).\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the %d elements that you wish to store in your array.\n", n);
    for(i=0; i <= n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element that you want the array to be searched for.\n");
    scanf("%d", &x);
    result = karsaSearch(arr, 0, n-1, x);
    (result == -1) ? (printf("\nThe element that you are looking for is not present in the array.\n"))
                   : (printf("\nElement found! It is present at index %d", result));
    return 0;
}

//C program for binary search
 // Name : Syed Suwaid
// Enroll no. : 8711
 //Section : B
// Semester : 4th
// Branch : CSE
// Dated : 11 - 8 - 2021
// Submitted to : Mr Aadil Yousuf
// Subject : Analysis and design of algorithms
