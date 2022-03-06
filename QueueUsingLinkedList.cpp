#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define getsize (struct node*)malloc(sizeof(struct node));
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void add(struct node**, struct node**, int);
int del(struct node**, struct node**);
void display(struct node*);
int main()
{
    char ans = 'y';
    struct node *start = NULL, *end = NULL;
    int num, exit = 1, action;
    cout<<"\n Hello! This program generates a queue using linked lists.\n";
    cout<<"\n So, go ahead and make your queue.\n";
    while(ans == 'y')
    {
        cout<<"\nEnter your element.\n";
        cin>>num;
        cout<<"\nWant to add another? (y/n)\n";
        while(getchar() != '\n');
        cin>>ans;
    }
    display(start);
    while(exit!=0)
    {
        cout<<"\n Your are inside the main menu!\n";
        cout<<"\nEnter : \n 0 to exit. \n 1 to add something to the queue. \n 2 to delete something from the queue. \n 3 to display the queue.\n";
        cout<<"\n Make your choice!\n";
        cin>>action;
        switch(action)
        {
        case 0:
            cout<<"\nYou are exiting.\n";
            return 0;
        case 1:
            cout<<"\nEnter your element.\n";
            cin>>num;
            add(&start, &end, num);
            display(start);
            system("cls");
            break;
        case 2:
            system("cls");
            if(num == NULL)
            {
                cout<<"\nThe queue is empty!\n";
                break;
            }
            num = del(&start, &end);
            cout<<"\nYou have deleted "<<num<<endl;
            break;
        case 3:
            display(start);
            break;
        default:
            cout<<"\nYou have not entered a valid choice, please try again!\n";
            exit = 1;
        }
    }
    return 0;
}
void add(struct node **start, struct node **end, int num)
{
    struct node *help = NULL;
    help = getsize;
    help -> data = num;
    help -> next = NULL;
    if(start == NULL)
    {
        *start = help;
        *end = help;
        return;
    }
    (*end) -> next = help;
    *end = help;
}
int del(struct node **start, struct node **end)
{
    struct node *temp;
    int num;
    temp = getsize;
    if(start == NULL)
        return NULL;
    temp = *start;
    num = temp -> data;
    *start = (*start) -> next;
    free(temp);
    return num;
}
void display(struct node *start)
{
    struct node *a = start;
    cout<<"\nDisplaying your queue : \n";
    while(a != NULL)
    {
        cout<<a->data;
        a = a->next;
    }
}
