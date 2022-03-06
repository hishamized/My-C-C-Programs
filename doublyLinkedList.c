#include<stdio.h>
struct node
{
  int info;
  struct node *prev,*next;
};
 struct node* start=NULL;
 void insertAsFirstNode()
  {
    struct node*n;

    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number");
    scanf("%d",&n->info);
    n->prev=NULL;
    n->next=NULL;
    if(start==NULL)
        start=n;
    else
    {
      start->prev=n;
      n->next=start;
      start=n;
    }
  }
void deleteFirstNode()
{
    struct node *r;

    if(start==NULL)
        printf("List Is Empty");
    else
    {
      r=start;
      start=start->next;
      start->prev=NULL;
      free(r);
    }
}
void viewlist()
{
    struct node *t;
    if(start=NULL)
     printf("List is Empty");
    else
    {
        t=start;
        while(t->next!=NULL)
        {
            printf("%d",t->info);
            t=t->next;
        }
    }
}

/* Author: Mohammad Hisham Mir
   EnrolL: 8613
   Section: B
   College: SSMCET
   Branch/Sem: CSE/3rd
*/
