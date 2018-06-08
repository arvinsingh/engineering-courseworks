
#include <stdio.h>
#define MAXSIZE 10
 
 struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
int main ()
{

    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
  do
   {
    {
        printf (" 1 FOR PUSH\n");
        printf (" 2 FOR POP\n");
        printf (" 3 TO DISPLAY STACK STATUS\n");
        printf (" 4 TO EXIT\n");
 
        printf ("Choice: ");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
        	printf("Invalid Choice!");
        }
        fflush (stdin);
    }
   }while(choice!=4);
}

void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed: ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
}

