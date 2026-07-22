#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Push
void push(int value)
{
    if(top>=MAX_SIZE - 1)
    {
        printf("Error:Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

// Pop
int pop()
{
    if(top<0)
    {
        printf("Error:Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

// Display
void display()
{
    if(top == -1)
    {
        printf("Error:Stack Empty.\n");
        return;
    }
    printf("Stack Elements are: ");

    for(int i=top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
}


int main()
{
    int choice,value;

    while(1)
    {
        printf("1. Push\n 2. Pop\n 3. Display\n 4.Exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                {
                    printf("Popped value: %d\n",value);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
            default:
                    printf("Invalid choice. Please try again");
        }
    }
    return 0;
}