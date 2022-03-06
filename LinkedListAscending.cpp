#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define getsize (struct node*)malloc(sizeof(struct node));
using namespace std;
void insertit(struct node**, int);
void del(struct node**, int);
void display(struct node*);
struct node
{
    int data;
    struct node *next;
};
int main()
{
    char ans = 'y';
    int exit = 1, num, action;
    struct node *start = NULL;
    cout<<"\nHello! This is a program to create a linked list in ascending order. So, go ahead and create your linked list.\n";
    while(ans == 'y')
    {
     cout<<"\nEnter your element.\n";
     cin>>num;
     insertit(&start, num);
     cout<<"\nWant to add another? (y/n)\n";
     while(getchar() != '\n');
     cin>>ans;
    }
    while(exit != 0)
    {
        cout<<"\nYou are inside the main menu right now.\n";
        cout<<"\n Press: \n 0 to exit. \n 1 to insert an element into the linked list. \n 2 to delete an element from the linked list. \n 3 to display the linked list.\n";
        cout<<"\nMake your choice.\n";
        cin>>action;
        switch(action)
        {
        case 0:
            cout<<"\nYou are exiting...\n";
            return 0;
        case 1:
            cout<<"\nEnter the element you wish to add to the linked list.\n";
            cin>>num;
            insertit(&start, num);
            display(start);
            break;
        case 2:
            cout<<"\nEnter the element you wish to be deleted from the linked list.\n";
            cin>>num;
            del(&start, num);
            display(start);
            break;
        case 3:
            cout<<"\nDisplaying the list.\n";
            display(start);
            break;
        default:
            cout<<"\nInvalid selection! Please try again!\n";
            exit = 1;
        }
    }
    return 0;
}
void insertit(struct node **start, int num)
{
    struct node *help = NULL, *curr = NULL, *pre = NULL;
        help = getsize;
        help -> data = num;
        if(*start == NULL)
        {
            help->next = NULL;
            *start = help;
            return;
        }
        for(curr = *start; curr -> data <= num; pre = curr, curr = curr -> next)
            if(curr->next == NULL)
            break;
        if(curr == *start && num < curr->data)
        {
            help -> next = *start;
            *start = help;
        }
        else if(curr->next == NULL && num > curr->data)
        {
            curr -> next = help;
            help -> next = NULL;
        }
        else //Insertion in between
        {
            pre -> next = help;
            help -> next = curr;
        }
}
void del(struct node **start, int num)
{
    struct node *curr = *start, *pre = NULL;
    while(curr->data != num)
    {
        pre = curr;
        curr = curr -> next;
        if(curr == NULL)
            break;
    }
    if(curr == *start)
    {
        *start = curr->next;
    }
    else if(curr == NULL)
    {
        cout<<"\nElement is not present in this list.\n";
        return;
    }
    else
        pre -> next = curr -> next;
    free(curr);
}
void display(struct node *start)
{
    struct node *i = NULL;
    cout<<"\nYour list : \n";
    for(i = start; i!= NULL; i = i -> next)
    {
        cout<<i->data<<endl;
    }
}

