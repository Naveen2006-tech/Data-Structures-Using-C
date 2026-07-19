#include <stdio.h>
#include <ctype.h>

//stack Declaration
char stack[100];
int top = -1;  //stack is empty

//push function
void push(char x)
{
    stack[++top] = x; //Adds the element to the top of the stack
}

//pop function
char pop()
{
    if (top == -1) //Check if the stack is empty
    return -1;

    else
    return stack[top--]; //Removes the top element from the stack and returns it
    
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the Expression: ");
    scanf("%s", exp);
    printf("\n");
    e=exp;

    while(*e !='\0')
    {
        if(isalnum(*e))
            printf("%c",*e);

        else if(*e == '(')
            push(*e);
        
        else if(*e == ')')
        {
            while((x=pop()) != '(')
                printf("%c",x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }

    //print remaining elements in the stack
    while(top != -1)
    {
        printf("%c",pop());
    }
    return 0;
}