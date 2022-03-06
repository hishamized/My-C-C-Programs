/* C program to implement stack and convert infix to postfix
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll: 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct stack *createstack(unsigned capacity)
{
    struct stack *stack = (struct stack*)malloc(sizeof(struct stack));
    if(!stack)
        return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(sizeof(int)*(capacity));
    return(stack);
}
int isEmpty(struct stack *stack)
{
    return stack->top = -1;
}
char peek(struct stack *stack)
{
    return stack->array[stack->top];
}
char pop(struct stack *stack)
{
    if(!isEmpty(stack))
    {
        return stack->array[stack->top--];
    }
    return '$';
}
void push(struct stack *stack, char op)
{
    stack->array[++stack->top] = op;
}
int isOperand(char ch)
{
    return (ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch<= 'Z');
}
int prec(char ch)
{
    switch(ch)
    {
    case '+':
    case '-':
        return 1;
    case '/':
    case '*':
        return 2;
    case '^':
        return 3;
    }
    return -1;
}
int infixToPostfix(char *exp)
{
    int i, k;
    struct stack *stack = createstack(strlen(exp));
    if(!stack)
        return -1;
    for(i=0, k = -1; exp[i]; ++i)
    {
        if(isOperand(exp[i]))
            exp[++k] = exp[i];
        else if(exp[i] == '(')
            push(stack, exp[i]);
        else if(exp[i] == ')')
        {
            while(!isEmpty(stack) && peek(stack)!='(')
                    exp[++k] = pop(stack);
            if(!isEmpty(stack) && peek(stack)!='(')
                return -1;
            else
                pop(stack);
        }
        else //Operator
        {
            while(!isEmpty(stack) && prec(exp[i] < peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }
    }
    while(!isEmpty(stack))
        exp[++k] = pop(stack);
    exp[++k] = '\0'; //Terminating character
    printf("%s", exp);
}
int main()
{
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    printf("\n\nWe converted the expression %s to postfix : ", exp);
    infixToPostfix(exp);
    return 0;
}
