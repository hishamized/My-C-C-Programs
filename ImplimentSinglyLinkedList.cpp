//Implementing Singly Linked List
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *prev, *head, *p;
void push(struct node **headref, int newData)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = (*headref);
    (*headref) = newNode;
}
void deleteNode(struct node **headref, int position)
{
    if(headref == NULL)
        return;
    struct node *temp = *headref;
    if(position == 0)
    {
        *headref = temp->next;
        free(temp);
        return;
    }
    for(int i=0; temp!=0 && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if(temp == NULL && temp->next == NULL)
        return;
    struct node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void printList(struct node *node)
{
    while(node!=NULL)
    {
        cout<<"\t"<<node->data;
        node = node->next;
    }
}
void traverseList()
{
    struct node *temp;
    if(head == NULL)
    {
        cout<<"\nThe list is empty.\n";
        return;
    }
    temp = head;
    while(temp!=NULL)
    {
        cout<<"\t"<<temp->data;
        temp = temp->next;
    }
}
int main() //Creating Nodes for the Linked List
{
    struct node *prev, *head, *p;
    int n, i;
    cout<<"\nEnter the number of elements.\n";
    cin>>n;
    head == NULL;
    for(i=0; i<n; i++)
    {
        p = (struct node*)malloc(sizeof(struct node));
        cin>>p->data;
        if(head == NULL)
        {
            head = p;
        }
        else
        {
            prev->next = p;
            prev = p;
        }
    return 0;

}

