/*
C++ Program to use linked lists for adding two polynomials
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int coeff;
    int pow;
    struct node *next;
};
void createNode(int x, int y, struct node **temp)
{
    struct node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r = (struct node*)malloc(sizeof(struct node));
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
}
void addPoly(struct node *poly1, struct node *poly2, struct node *poly)
{
    while(poly1->next && poly2->next)
    {
        if(poly1->pow > poly2->pow)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if(poly2->pow > poly1->pow)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        poly->next = (struct node*)(malloc(sizeof(struct node)));
        poly = poly->next;
        poly->next = NULL;
    }
    while(poly1->next || poly->next)
    {
        if(poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if(poly2->next)
        {
             poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next = (struct node*)(malloc(sizeof(struct node)));
        poly = poly->next;
        poly->next = NULL;
    }
}
void show(struct node *node)
{
    while(node->next!=NULL)
    {
        printf("%d^%d", node->coeff, node->pow);
        node = node->next;
        if(node->coeff >= 0)
        {
            if(node->next!=NULL)
               printf("+");
        }
    }
}
int main()
{
    struct node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
    createNode(5, 2, &poly1);
    createNode(4, 1, &poly1);
    createNode(2, 0, &poly1);
    createNode(-5, 1, &poly2);
    createNode(-5, 0, &poly2);
     printf("1st Number: ");
     show(poly1);

    printf("\n2nd Number: ");
    show(poly2);

    poly = (struct node*)malloc(sizeof(struct node));
    addPoly(poly1, poly2, poly);
    printf("\nAdded polynomial: ");
    show(poly);

    return 0;

}
