#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<windows.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    char ans = 'y';
    int num, exit = 1; action;
    struct node *start = NULL;
    cout<<"\n Hello! This program is for creation of a linked list so go ahead and make your linked list.\n;
    while(ans == 'y')
    {
        cout<<"\n Enter the data : ";
        cin>>num;
        insertion(&start, num);
        cout<<"\n Want to enter another ? (y/n) : \n";
        while(getchar() != '\n');
        cin>>ans;
    }
    while(exit !=0)
    {
        display(start);
        cout<<"\n You are inside the menu section \n\n";
        cout<<" Press \n 0 to exit \n 1 to insert node \n 2 to delete node \n 3 to display \n\n";
        cout<<"\n\n Enter your choice : \n";
        cin>>action;
        switch(action)
        {
        case 0:
            cout<<"\n You are exiting...\n";
            return 0;
        case 1:
            cout<<"\nEnter your number : \n\n";
            cin>>num;
            insertion(&start, num);
            break;
        case 2:
            cout<<"\n Enter the number that you want to delete : \n";
            cin>>num;
            deletion(&start, num);
            break;
        case 3:
            display(start);
            break;
        default:
            cout<<"\n You have entered a wrong option. \n Please try again! \n";
            exit = 1;
        }
    }
    return 0;
}
void insertion(struct node **start, int num)
{
struct node *help = NULL, *curr = NULL;
help = GetSize;
help->data = num;/*This is our new node.*/
help->next = NULL;

if (*start == NULL)/*Inserting the first element*/
{
	*start = help;
	return;
}

/*Finding the position for the number to insert*/
for (curr = *start; curr->next != NULL; curr = curr->next);

curr->next = help;
}

void deletion(struct node **start, int num)
{
struct node *curr = *start, *pre = NULL;

/*Finding the data to be deleted */
while (curr->data != num)
{
	pre = curr;
	curr = curr->next;

	/*List ends and the number nor found.*/
	if (curr == NULL)
		break;
}

/*Deleting the first node*/
if (curr == *start)
	*start = curr->next;
else if (curr == NULL)/*Number not found so just return*/
{
	printf("\nNumber is not present in the list.");
	return;
}
else/*Deleting in between or last node*/
	pre->next = curr->next;

free(curr);/*Deletion*/
}

void display(struct node *start)
{
struct node *i = NULL;
printf("\nYour list\n");
for (i = start; i != NULL; i = i->next)
	printf("%d\t", i->data);
}
