#include <stdio.h>
#include <string.h>
 
void string_print(char*);
void push(char);
char pop();
char stack[100];
int top = -1;
 

int main() 
{
   int c;
   char s[100];

   printf("\nEnter a string: ");
   gets(s);
   do
   {
   printf("\n\n To print the string     1");
   printf("\n To reverse the string   2");
   printf("\n To check for Palindrome 3");
   printf("\n To Exit  		 4");
   printf("\nEnter your choice	:");
   scanf("%d",&c);
   switch(c)
   {
   	case 1:
   		printf("Entered string is: ");
        string_print(s);
        break;
    case 2:
        string_reverse(s);
        break;
    case 3:
        string_palindrome(s);
        break;
    case 4:
    	break;
    default:
    printf("\nInvalid Choice");
    }
    }while(c!=4);
   return 0;
}
 
void string_print(char *t) 
{
   if (*t == '\0')
   return;
   printf("%c", *t);
   string_print(++t);
}

int string_reverse(char *t) 
{
   char temp;
   int i = 0, j = 0;
   string_print(t);
   j = strlen(t) - 1;
 
   while (i < j) {
      temp = t[i];
      t[i] = t[j];
      t[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReversed string is :%s",t);
   return (0);
}

int string_palindrome(char *t)
{
    int i, count = 0, len;
    printf("Entered string is: ");
   	string_print(t);
    len = strlen(t);
    for (i = 0; i < len; i++)
    {
        push(t[i]);
    }
 
    for (i = 0; i < len; i++)
    {
        if (t[i] == pop())
            count++;
    }
 
    if (count == len)
        printf("\n%s is a Palindrome string", t);
    else
        printf("\n%s is not a palindrome string", t);
}

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return(stack[top--]);
}

