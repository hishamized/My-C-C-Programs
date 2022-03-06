/* C program to implement Doubly Linked List
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll: 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void push(struct node **headref, int newData)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = (*headref);
    newNode->prev = NULL;
    if((*headref!=NULL))
        (*headref)->prev = newNode;
    (*headref) = newNode;
}
void printList(struct node *nod)
{
    struct node *last;
    printf("\nTraversing list in forward direction\n");
    while(nod!=NULL)
    {
        printf("\tData : %d \n", nod->data);
        last = nod;
        nod = nod->next;
    }
    printf("\nTraversing list in reverse direction\n");
    while(last!=NULL)
    {
        printf("\tData : %d \n", last->data);
        last = last->prev;
    }
}
int main()
{
    struct node *head = NULL;
    push(&head, 100);
    push(&head, 200);
    push(&head, 300);
    printf("\nCreated doubly linked list is : \n");
    printList(head);
    return 0;
}
