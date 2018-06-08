#include<stdio.h>
#include<malloc.h>
#include<stdio.h>
#include<conio.h>
 
struct que
{
 int info;
 struct que *next;
};
void inqueue(struct que**,struct que**,int);
void delqueue(struct que**,struct que**);
void display(struct que*,struct que*);
 
int main()
{

 struct que *front, *rear;
 int choice, item;
 front = NULL;
 rear  = NULL;
 do
 {
   printf("\n1 Insert in Queue  \n");
   printf("2 Delete from Queue \n");
   printf("3 Display the Queue \n");
   printf("4 Exit \n");
   printf("Enter choice : ");
   scanf(" %d",&choice);
  switch(choice)
  {
   case 1:
	   printf("\nEnter new element: ");
	   scanf("%d", &item);
	   inqueue(&front,&rear,item);
	   break;
   case 2:
	   delqueue(&front,&rear);
	   break;
   case 3:
	   display(front,rear);
	   break;
	case 4:
	   break;
   default:
	   printf("\nInvalid choice");
   }
  }while(choice !=4);
 return 0;
 }
 
 void inqueue(struct que **front,struct que **rear,int x)
 {
  struct que *nw;
  nw=(struct que*)malloc(sizeof(struct que));
  nw->info = x;
 
  if((*front)==NULL)
      (*front)=nw;
  else
  {
    (*rear)->next=nw;
  }
  (*rear)=nw;
  (*rear)->next=*front;
 }
 
 void delqueue(struct que **front,struct que **rear)
 {
  struct que *save;
  if((*front)==NULL)
	printf("\nQueue underflow");
  else if ((*front)== (*rear))
     {
      save=(*front);
      (*front)=NULL;
      (*rear)=NULL;
      printf("\nQueue Empty now");
     }
  else
   {
     save = *front;
     (*front)=(*front)->next;
     (*rear)->next=*front;
      free(save);
   }
 }
 
 void display(struct que *front,struct que *rear)
 {
  printf ("\nNow queue is :  ");
  if (front==NULL)
      printf("Queue is empty");
  else
   {
    if(front==rear)
      printf("%d 	",front->info);
    else
    {
     while(front != rear)
     {
      printf("%d 	",front->info);
      front=front->next;
     }
     printf("%d 	",rear->info);
    }
   }
 }

