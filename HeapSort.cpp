/*INCOMPLETE*/
#include<iostream>
using namespace std;
struct Heap *CreateHeap(int capacity)
{
 struct Heap *h = (struct Heap*)malloc(sizeof(struct Heap))
 if(h == NULL)
 {
     cout<<"\nMemory Error\n.";
     return;
 }
 h -> Count = 0;
 h -> capacity = capacity;
 h -> Array = (int*)malloc(sizeof(int)*h->capacity)
 if(h->Array == 0)
 {
     cout<<"\n\nMemory Error.";
     return;
 }
 return (h);
};
void percolateDown(struct Heap *h, int i)
{
    int l, r, MAX, temp;
    l = leftChild(h, i);
    r = rightChild(h, i);
    if(l!= -1 && h->Array[l] > h->Array[i])
    {
        MAX = l;
    }
    else
        MAX = i;
    if(r!= -1 && h->Array[r] > h->Array[i])
    {
        MAX = r;
    }
    else
        MAX = i;
    if(MAX!= i)
    {
        temp = h->Array[i];
        h->Array[i] = h->Array[MAX];
        h->Array[MAX] = temp;
    }
    percolateDowm(h, MAX);
}
int leftChild(struct Heap *h, int i)
{
  int left = 2*i + 1;
  if(left > h->Count)
    return (-1);
  return(left);
}
int rightChild(struct Heap *h, int i)
{
    int right = 2*i + 1;
    if(left > h->capacity)
        return (-1);
    return(right);
}
void buildHeap(struct Heap *h, int A[], int n)
{
    int i;
    if(h == NULL)
        return;
    if(n > h->capcity)
        resizeHeap(h);
    for(i=0; i<n; i++)
        h -> Array[i] = A[i];
    h -> Count = n;
    for(i=0; i<(n-1)/2; i++)
        percolateDown(h, i);
}
void resizeHeap(struct Heap *h)
{
    int i;
    int *oldArray = h->Array;
    h->Array = (int*)malloc(sizeof(int*h->capacity*2));
    if(h->Array == NULL)
    {
        cout<<"\n\nMemory Error!\n\n";
        return;
    }
    for(i=0; i < h-> capacity; i++)
    {
        h->Array[i] = oldArray[i];
        h->capacity *= 2;
        free(oldArray);
    }
}
void HeapSort(int A[], int n)
{
    struct Heap *h = CreateHeap(n);
    int oldSize, i, temp;
    for(i = n-1; i>0; i--)
    {
        temp = h->Array[0];
        h->Array[0] = h->Array[h->capcity - 1];
        h->Array[h->capcity - 1] = temp;
        h->Count--;
        percolateDown(h, i);
    }
    h->Count = oldSize;
}
int display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<A[i];
    }
}
int main()
{
    int arr[10], i;
    cout<<"Enter 10 integers. \n\n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting : \n\n";
    display(arr, 10);
    HeapSort(arr, 10);
    cout<<"\n\nArray after sorting : \n\n";
    display(arr, 10);
    return 0;
}
