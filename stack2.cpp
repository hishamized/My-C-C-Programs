#include<iostream>
using namespace std;
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};
struct ArrayStack *createStack(int cap)
{
    struct ArrayStack *stack = (struct ArrayStack*)malloc(sizeof(struct ArrayStack));
    stack -> top = -1;
    stack -> capacity = cap;
    stack -> array = (int*)malloc(sizeof(int)*(stack->capacity));
    return(stack);
};
int isFull(struct ArrayStack *stack)
{
    if(stack->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty(struct ArrayStack *stack)
{
    if(stack->top == -1)
    {
        return 0;
    }
    else
        return 1;
}
void push(struct ArrayStack *stack, int item)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->array[top] = item;
    }
}
int pop(struct ArrayStack *stack)
{
    int item;
    if(!isEmpty(stack))
    {
        item = stack->array[stack->top];
        top--;
        return(item);
    }
    return(-1);
}
int main()
{
  int choice, item, cap;
  cout<<"\nEnter the capacity of the stack.\n";
  cin>>cap;
  struct ArrayStack *stack;
  stack = createStack(cap);
  while(1)
  {
      cout<<"Enter 1 to push something into the stack.\n";
      cout<<"Enter 2 to pop something from the stack.\n";
      cout<<"Enter 3 to exit.\n";
      cout<<"\n\nEnter your choice.\n";
      cin>>choice;
      switch(choice)
      {
      case 1:
        cout<<"\nEnter a number to be pushed into the stack.\n";
        cin>>item;
        push(stack, item);
        break;
      case 2:
        item = pop(stack);
        if(item == -1)
        {
            cout<<"\nStack is empty.\n";
        }
        else
            cout<<"\nPopped out the value "<<item<<" from the stack.\n";
        break;
      case 3:
        exit(0);
      }
  }
  return 0;
}

