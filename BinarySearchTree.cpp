#include<iostream>
using namespace std;
struct BSTNode
{
    int data;
    struct BSTNode *left;
    struct BSTNode *right;
} *root = NULL, *p = NULL, *np = NULL, *q;
void create()
{
    int value, c=0;
    while(c > 7)
    {
        if(root == NULL)
        {
            root = new BSTNode;
            cout<<"\nEnter the value of the root node.\n";
            cin>>root->data;
            root->right = NULL;
            root->left = NULL;
        }
        else
        {
            p = root;
            cout<<"\nEnter the value of the node.\n";
            cin>>value;
            while(true)
            {
                if(value < p -> data)
                {
                    if(p->left == NULL)
                    {
                        p  = new BSTNode;
                        p = p->left;
                        p -> data = value;
                        p-> left = NULL;
                        p-> right = NULL;
                        cout<<"\nValue entered in left.\n";
                        break;
                    }
                    else if(p->left!=NULL)
                    {
                        p = p-> left;
                    }

                }
                if(value > p-> data)
                {
                    if(p->right == NULL)
                    {
                        p = new BSTNode;
                        p = p-> right;
                        p-> data = value;
                        p-> left = NULL;
                        p-> right = NULL;
                        cout<<"\nValue entered in right.\n";
                        break;
                    }
                    if(p-> right !=NULL)
                    {
                        p = p-> right;
                    }
                }
            }
        }
        c++;
    }
}
void preOrder(BSTNode *p)
{
    if(p!=NULL)
    {
        cout<<"\t"<<p->data;
        preOrder(p->left);
        preOrder(p->right);
    }
}
void inOrder(BSTNode *p)
{
    if(p!=NULL)
    {
        inOrder(p->left);
        cout<<"\t"<<p->data;
        inOrder(p->right);
    }
}
void postOrder(BSTNode *p)
{
    if(p!=NULL)
    {
        postOrder(p->left);
        postOrder(p->right);
        cout<<"\t"<<p->data;
    }
}
void insertion(struct BSTNode *root, int data)
{
    struct BSTNode *par;
    struct BSTNode *n = (struct BSTNode*)malloc(sizeof(struct BSTNode));
    n -> left == NULL;
    n -> data = data;
    n -> right == NULL;

    if(root == NULL)
    {
        root = n;
    }
    else
    {
        par = root;
    while(par!=NULL)
    {
        if(par->data > data)
        {
            par->left = n;
            par = par -> left;
        }
        else if(par -> data < data)
        {
            par -> right = n;
            par = par -> right;
        }
    }
  }
}
struct BSTNode Delete(struct BSTNode *root, int data)
{
    struct BSTNode *temp;
    if(root ==  NULL)
    {
        cout<<"\nNo such element exists!\n";
    }
    else if(data < root -> data)
    {
        root -> left = Delete(root -> left, data);
    }
    else if(data > root -> data)
    {
        root -> right = Delete(root -> right, data);
    }
    else //Element Found
    {
        if(root -> left && root -> right) //Both Children Exist
        {
           temp = findMax(root -> left);
           root -> data = temp -> data;
           root -> left = Delete(root -> left, root -> data);
        }
        else // One or none children
        {
            if(root -> left == NULL)
            {
                root -> data = root -> right;
            }
            if(root -> right == NULL)
            {
                root -> data = root -> left;
            }
            free(temp);
        }
    }
    return(root);
}
struct BSTNode Search(struct BSTNode *root, int data)
{
  int depth = 0;
  struct BSTNode *temp;
  temp = root;
  while(temp!=NULL)
  {
      depth++;
      if(temp -> data == data)
      {
          cout<<"\n\tElement found at depth : "<<depth;
      }
      else if(data < temp->data)
      {
          temp = temp -> left;
      }
      else
      {
          temp = temp -> right;
      }
  }
  cout<<"\nData Not Found!\n";
  return;
}
int main()
{
    create();
    cout<<"\nPrinting tree in preorder traversal.\n";
    preOrder(root);
    cout<<"\nPrinting tree in inorder traversal.\n";
    inOrder(root);
    cout<<"\nPrinting the tree in postorder traversal.\n";
    preOrder(root);
    return 0;
}
