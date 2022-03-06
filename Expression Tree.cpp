/*
C++ Program to implement Expression Tree and traverse it in preorder, postorder and inorder
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct ET
{
    char value;
    struct ET *left, *right;
};
bool operatorCheck(char a)
{
    if( a == '+' || a == '-' || a == '*' || a == '/' || a == '^')
        return true;
    return false;
}
void preOrder(ET *t)
{
    if(t)
    {
        printf("%c", t->value);
        preOrder(t->left);
        preOrder(t->right);
    }
}
void inOrder(ET *t)
{
    if(t)
    {
        inOrder(t->left);
        printf("%c", t->value);
        inOrder(t->right);
    }
}
void postOrder(ET *t)
{
    if(t)
    {
        postOrder(t->left);
        postOrder(t->right);
        printf("%c", t->value);
    }
}
ET *newNode(char v)
{
    ET *temp = new ET;
    temp->value = v;
    temp->left = temp->right = NULL;
    return temp;
};
ET* construction(char postfix[])
{
    stack<ET *> st;
    ET *t, *t1, *t2;
    for(int i=0; i<strlen(postfix); i++)
    {
        if(!operatorCheck(postfix[i]))
        {
            t = newNode(postfix[i]);
            st.push(t);
        }
        else
        {
            t = newNode(postfix[i]);
            t1 = st.top(); // Store top
            st.pop();      // Remove top
            t2 = st.top();
            st.pop();
            t -> right = t1;
            t -> left = t2;
            st.push(t);
        }
    }
    t = st.top();
    st.pop();
    return t;
}
int main()
{
    char postfix[] = "ab+ef*g*-";
    ET* r = construction(postfix);
    printf("infix expression is \n");
    inOrder(r);
    printf("\nPre Order Traversal : \n");
    preOrder(r);
    printf("\nPost Order Traversal : \n");
    postOrder(r);
    return 0;
}

