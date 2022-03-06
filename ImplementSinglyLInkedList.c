/* C program to Implement Singly Linked List
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
    struct node *next;
};
void printList(struct node *node);
int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head -> data = 100;
    head->next = second;
    second->data = 200;
    second->next = third;
    third->data = 300;
    third->next = NULL;
    printList(head);
    //printList(second);
    //printList(third);
    return 0;
}
void printList(struct node *node)
{
    while(node!=NULL)
    {
        printf("\t Data : %d \n", node->data);
        node = node->next;
    }
}
