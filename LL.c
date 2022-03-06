#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};
int main()
{
    struct node *prev, *head, *p;
    int n,i;
     printf("Eneter the number of elements");
     scanf("%d",&n);
     head=NULL;
      for(i=0;i<n;i++)
      {
          p=malloc(sizeof(struct node));
           scanf("%d", &p->data);
           p->next=NULL;
            if(head==NULL)
                head=p;
            else
                prev->next=p;
                prev=p;
      }
      void printlist(struct node *head)
      {
          while(head!=NULL)
          {
              printf("Data = %d\n",head->data);
              head=head->next;
          }

      }
      return 0;


}
