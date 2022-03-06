#include<iostream>
using namespace std;
struct Binary Tree Node
{
    int info;
    struct Binary Tree Node *left;
    struct Binary Tree Node *right;
};
void preOrder(struct Binary Tree Node *root)
{
    if(root)
    {
        cout<<"\n\t"<<root -> info;
        preOrder(root -> left); //Recursion
        preOrder(root -> right); //Recursion
    }
}
void inOrder(struct Binary Tree Node *root)
{
    if(root)
    {
        inOrder(root -> left);
        cout<<"\n\t"<<root -> info;
        inOrder(root -> right);
    }
}
void postOrder(struct Binary Tree Node *root)
{
    if(root)
    {
        preOrder(root -> left);
        preOrder(root -> right);
        cout<<"\n\t"<<root -> info;
    }
}
void levelOrder(struct Binary Tree Node *root)
{
    struct Binary Tree Node *temp;
    struct Queue *Q = createQueue();
    if(!root)
        return;
    inQueue(Q, root);
    while(!isEmptyQueue(Q))
    {
        temp = deQueue(Q);
        cout<<"\n\t"<< temp -> info;
    }
    if(temp -> left)
    {
        inQueue(Q.temp -> left)
    }
    if(temp -> right)
    {
        inQueue(Q.temp -> right);
    }
    deleteQueue(Q);
}
