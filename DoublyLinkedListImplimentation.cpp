#include<iosteream>
#include<stdlib.h>
struct node
{
    int info;
    struct node *prev, *next;
};
struct node *start = NULL;
void insertAsFirstNode()
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    cout<<"\nEnter a number.\n";
    cin>>n->info;
    n->prev = NULL;
    n->next = NULL;
    if(start == NULL)
    {
        start = n;
    }
    else
    {
        start -> prev = n;
        n-> next = start;
        start = n;
    }
}
void deleteFirstNode()
{
    struct node *r;
    if(start == NULL)
    {
        cout<<"\n\nThe list is empty.\n\n;
        return;
    }
    else
    {
        r = start;
        start = start -> next;
        start->prev == NULL;
        free(r);
    }
}
void viewList()
{
    struct node *t;
    t = start;
    if(t == NULL)
    {
        cout<<"\n\nList is empty\n\n.";
    }
    else
    {
        while(t!=NULL)
        {
            cout<<"\t"<<t->info;
            t = t->next;
        }
    }
}
