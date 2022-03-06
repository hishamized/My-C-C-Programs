#include<iostream>
#include<stdio.h>
#define getsize (struct node*)malloc(sizeof(struct node));
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void push(struct node**, int);
int pop(struct node**);
int main()
{
    int num, action, exit = 1;
    char ans = 'y';
    struct node* top = NULL;
    printf("\n This program creates a stack using linked lists so go ahead and create your stack.\n\n");
    while(ans == 'y')
    {
        cout<<"\n Enter the data you want to be added to the stack.\n\n";
        cin>>num;
        push(&top, num);
        cout<<"\nWant to add another ? (y/n)\n";
        while(getchar() != '\n');
        cin>>ans;
    }
    while(exit != 0)
    {
        cout<<"\n You are inside the main menu.\n";
        cout<<"\n Enter 0 to exit. \n Enter 1 to push something into the stack. \n Enter 2 to pop something out of the stack. \n";
        cout<<"\n Make your choice.\n";
        cin>>action;
        switch(action)
        {
        case 0:
            cout<<"\n You are exiting...\n";
            return 0;
        case 1:
            cout<<"\n Enter the data to be pushed into the stack.\n";
            cin>>num;
            push(&top, num);
            break;
        case 2:
            if(num == NULL)
            {
                cout<<"\n Stack is empty.";
                break;
            }
            num = pop(&top);
            cout<<"\n You have popped out : "<<num<<endl;
            break;
        default:
            cout<<"\n Invalid choice! Please try again!"<<endl;
            exit = 1;
        }
    }
    return 0;
}
void push(struct node **top, int num)
{
   struct node *temp = NULL, *help = NULL;
   help = getsize;
   if(help == NULL)
      {
          cout<<"\n Stack is full.\n";
          return;
      }
      help -> data = num;
      help -> next = *top;
      *top = help;
}
int pop(struct node **top)
{
    struct node *temp = getsize;
    int num;
    if(num == NULL)
        return NULL;
    num = (*top) -> data;
    temp = *top;
    *top = (*top) -> next;
    free(temp);
    return num;
}
