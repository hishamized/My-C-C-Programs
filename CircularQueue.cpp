/*
C++ Program to implement Array Based Circular Queue
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int front, rear;
    int size;
    int *arr;
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
     void enQueue(int value);
     void displayQueue();
};
void Queue::enQueue(int value)
{
    if((front == 0 && rear == size - 1) || (rear == (front-1)%(size-1)))
    {
        printf("\nQueue is Full");
        {
            return;
        }
    }
    else if(front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if(rear == size - 1 && front!=0)
    {
        rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}
void Queue::displayQueue()
{
    if(front == -1)
    {
        printf("\nQueue Is Empty\n");
        return;
    }
    printf("\nElements in the circular Queue are : \n");
    if(rear >= front)
    {
        for(int i=front; i<=rear; i++)
        {
            printf("\n\t %d", arr[i]);
        }
    }
    else
    {
        for(int i=front; i<size; i++)
        {
             printf("\n\t %d", arr[i]);
        }
        for(int i=0; i<=rear; i++)
        {
             printf("\n\t %d", arr[i]);
        }
    }
}
int main()
{
    Queue q(7);
    q.enQueue(144);
    q.enQueue(224);
    q.enQueue(153);
    q.enQueue(-65);
    q.enQueue(144);
    q.displayQueue();
    q.enQueue(900);
    q.enQueue(260);
    q.displayQueue();
    return 0;
}
