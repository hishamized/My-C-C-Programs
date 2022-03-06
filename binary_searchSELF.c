#include<stdio.h>
int binary_search(int array[], int l, int r, int x)
{
    while(l<=r){
       int m = l + (r-l)/2;
        if(array[m] == x)
        {
           return m;
        }
        if(x > array[m])
        {
            l = m + 1;

        }
        else //if x < array[m]
        {
            r = m - 1;
        }
    }
    return -1;
}
void display(int array[], int n)
{
    printf("\nDisplaying the array.\n");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", array[i]);
    }
}
int main()
{
    int n;
    int x;
    printf("\nEnter the number of elements that the array shall contain.\n");
    scanf("%d",&n);
    int array[n];
    printf("\nLet's start inserting elements into our array IN ASCENDING ORDER\n");
    for(int i=0; i<n; i++)
    {
       printf("\nEnter the array element at index %d\t", i);
       scanf("%d",&array[i]);
    }
    display(array, n);
    printf("\nEnter the element that you are looking for\n");
    scanf("%d", &x);
    int result = binary_search(array,0, n-1, x);
    (result == -1) ? printf("\nThe element was not found in this array\n") : printf("\n The element %d was found at index %d\n",x,result);
    return 0;
}
