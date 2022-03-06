#include<iostream>
using namespace std;
struct ArrayQueue
{
    int capcity;
    int front, rear;
    int *array;
};
struct ArrayQueue createQueue(int capcity)
{
    struct ArrayQueue *Q = (struct ArrayQueue*)malloc(sizeof(struct ArrayQueue));
    if(!Q)
        return NULL;
    Q-> capcity = capcity;
    Q->front = Q->rear = -1;
    Q->array = (int*)malloc(sizeof(int)*(Q->capcity));
    if(!Q->array)
        return NULL;
    return (Q);
};
int isEmptyQueue(struct ArrayQueue *Q)
{
    return Q->front = -1;
}
int isFullQueue(struct ArrayQueue *Q)
{
    return Q->rear + 1 % Q->capcity == Q->front;
}
int queueSize()
{
    return (Q->capacity - Q->front + Q-> rear + 1) % Q-> capcity;
}
void deleteQueue(struct ArrayQueue *Q)
{
    if(Q)
    {
        if(Q->array)
        {
            free)Q->array;
        }
        free(Q);
    }
}
void enQueue(struct ArrayQueue *Q, int data)
{
    if(isFullQueue)
    {
        cout<<"\nOverflow!.\n";
    }
    else
    {
        Q->rear = Q->rear + 1 % Q->capcity;
        Q->array[Q->rear] = data;
        if(Q->front == -1)
        {
            Q->front = Q->rear;
        }
    }
}
void deQueue(struct ArrayQueue *Q)
{
    int data = -1;
    if(isEmptyQueue(Q))
    {
        cout<<"\nQueue is Empty.\n";
        return(-1);
    }
    else
    {
        data = Q->array[Q->front];
        if(Q->front == Q->rear)
        {
            Q->front = Q->rear = -1;
        }
        Q->front = Q->front + 1 % Q->capcity;
    }
    return data;
}
