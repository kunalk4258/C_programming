#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = item;
    }
}

int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void display()
{
    int i;
    if (top < 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

void reverse()
{
    int item;

    if (top < 0)
    {
        return;
    }

    item = pop();
    reverse();
    insert_at_bottom(item);
}

void insert_at_bottom(int item)
{
    if (top < 0)
    {
        push(item);
    }
    else
    {
        int temp = pop();
        insert_at_bottom(item);
        push(temp);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    printf("Original Stack:\n");
    display();

    reverse();

    printf("Reversed Stack:\n");
    display();

    return 0;
}
