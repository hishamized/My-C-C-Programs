/*
C++ Program to Implement Priority Queue Using Heap
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<iostream>
#include<climits>
using namespace std;
void swap(int *x, int *y);
class minheap
{
    int *harr;
    int capacity;
    int heapsize;
   public:
       minheap(int capacity);
       void minheapify(int);
       int parent(int i)
       {
           return (i-1)/2;
       }
       int left(int i)
       {
           return (2*i + 1);
       }
       int right(int i)
       {
           return (2*i + 2);
       }
       int getMin()
       {
           return harr[0];
       }
       int extractMin();
       void insertKey(int k);
       void deletekey(int k);
};
minheap::minheap(int cap)
{
    heapsize = 0;
    capacity = cap;
    harr = new int[cap];
}
void minheap::insertKey(int k)
{
    if(heapsize == capacity)
    {
        printf("\nOverflow: Could not insert key.\n");
        return;
    }
    heapsize++;
    int i = heapsize - 1;
    harr[i] = k;
    while(i!=0 && harr[parent(i)] > harr[i])
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int minheap::extractMin()
{
    if(heapsize <= 0)
    {
        return INT_MAX;
    }
    if(heapsize == 1)
    {
        heapsize --;
        return harr[0];
    }
    int root = harr[0];
    harr[0] = harr[heapsize - 1];
    heapsize --;
    minheapify(0);
    return root;
}
void minheap::minheapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(l < heapsize && harr[l] < harr[i])
    {
        smallest = l;
    }
    if(r < heapsize && harr[r] < harr[smallest])
    {
        smallest = r;
    }
    if(smallest!=i)
    {
        swap(&harr[i], &harr[smallest]);
        minheapify(smallest);
    }
}
int main()
{
    minheap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << "\nExtracted Minimum Element : " << h.extractMin() << "\n\n ";
    cout << "\nMinimum Value : " << h.getMin() << "\n\n ";
    return 0;
}
