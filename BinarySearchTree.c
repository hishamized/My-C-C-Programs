/*
C++ Program to...
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\n",root->key);
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int key)
{
    if(node == NULL)
        return newNode(key);
    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);
    return node;
}
struct node* search(struct node* root, int key)
{

	if (root == NULL || root->key == key)
        printf("%d is located at %d \n",root->key, root);


	if (root->key < key)
	return search(root->right, key);


	return search(root->left, key);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 100);
    insert(root, 200);
    insert(root, 300);
    insert(root, 400);
    insert(root, 500);

    printf("\n\nDisplaying the binary tree in inorder traversal : \n\n");
    inorder(root);
    printf("\n\nSearching element 400\n\n");
    search(root, 400);
    return 0;
}

