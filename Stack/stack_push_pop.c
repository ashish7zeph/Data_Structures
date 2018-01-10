
#include <stdio.h>
#define MAXSTK 10

int stack[MAXSTK];
int top = -1;

void push()
{
    int x;
    if(top == MAXSTK-1)
        printf("Stack is full");
    else
        top++;
        scanf("%d",&x);
        stack[top] = x;
    return 0;
}

void pop()
{
    if(top == -1)
        printf("Stack is empty");
    else
        top--;
    return 0;
}

void display()
{
    int i;
    if(top == -1)
        printf("Stack is empty");
    else
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
}

int main()
{
    int y = 1;
    while(y)
    {
        printf("\npress 1 to push & 2 to pop & 3 to display stack & 0 to exit ");
        scanf("%d",&y);
        if(y == 1)
            push();
        else if(y == 2)
            pop();
        else if(y == 3)
            display();
        else if(y == 0)
            continue;
        else
            printf("\nWrong choice");

    }
    return 0;
}
