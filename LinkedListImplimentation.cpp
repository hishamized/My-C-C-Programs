#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void push(struct node **headref, int newData)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = newData;
    newNode -> next = (*headref);
    (*headref) = newNode;
}
void deleteNode(struct node **headref, int position)
{
    if(*headref == NULL)
    {
        return;
    }
    struct node *temp = *headref;
    if(position == 0)
    {
        *headref = temp -> next;
        free(temp);
        return;
    }
    for(int i=0; temp!=NULL && i < position - 1; i++)
    {
        temp = temp -> next;
    }
    if(temp == NULL && temp->next == NULL)
    {
        struct node *next = temp->next->next;
        free(temp->next);
        temp->next = next;
    }
}
void printList(struct node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"\t";
        node = node->next;
    }
}
void traverseList()
{
    if(head == NULL)
    {
        cout<<"\n\nList is Empty.\n\n";
        return;
    }
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp -> next;
    }
}
int main()
{
    struct node *prev, *head, *p;
    int i, n;
    cout<<"\n\nEnter the number of elements in the linked list.\n";
    cin>>n;
    head = NULL;
    for(i=0; i<n; i++)
    {
        p = (struct node*)malloc(sizeof(struct node));
        cin>>p->data;
        p->next = NULL;
        if(head == NULL);
        {
            head = p;
        }
        else
        {
          prev->next = p;
          prev = p;
        }
    }
    return 0;
}

