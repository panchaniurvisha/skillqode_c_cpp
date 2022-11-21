/*#include <stdio.h>
 
#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX],n,x;
int rear=-1,front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("\n Enter the size of STACK[MAX=100]:");
        scanf("%d",&n);
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } /* End of switch */
  //  } /* End of while */
//} /* End of main() */
 
/*void insert()
{
   
    if (rear>=n)
    {
        printf("Queue Overflow \n");
    }
    else if ( rear == front=-1)
    {
        front=rear=0;
        queue_array[rear]=x;
        printf("\n insert value :");
        scanf("%d",&x);
    }
    else
    {
        printf("\n insert value :");
        scanf("%d",x);
        queue_array[++rear]=x;
    }
} 
/*void delete()
{
    if (front == - 1)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else if(front=rear)
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = rear=-1;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front++]);
        
    }
} *//* End of delete() */
 
/*void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i < rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}*/ /* End of display() */
#include <stdio.h>
#define MAX 20
#include<stdlib.h>
int queue_array[MAX],x,n;
int rear = - 1;
int front = - 1;
void insert();
void delete();
void display();
int main()
{
      printf("Perform operations on queue\n");
      printf("------------------------------\n");
      printf("\tMenu");
      printf("\n------------------------------\n");
      printf("\n Enter the size of STACK[MAX=100]:");
      scanf("%d",&n);
      printf("1. Insert element \n");
      printf("2. Delete element \n");
      printf("3. Display queue\n");
      printf("4. Exit\n");
      printf("------------------------------\n");
      int ch;
      while (1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch(ch)
            {
                  case 1:
                        insert();
                        break;
                  case 2:
                        delete();
                        break;
                  case 3:
                        display();
                        break;
                  case 4:
                        exit(1);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}
void insert()
{
      if (rear>n)
            printf("Queue Overflow \n");
      else if(rear==front=-1)
      {
            printf("\nEnter element : ");
            scanf("%d", &x);
      }
      else
      {
             
            printf("\n%d is inserted in queue\n",queue_array[++rear]);
            printf("------------------------------\n");
      }
}
void delete()
{
      if (front == - 1)
      {
            printf("Queue Underflow \n");
      }
      else if(front=rear)
      {
             printf("\nElement deleted from queue is : %d\n", queue_array[front]);
      }
      else
      {
            printf("\nElement deleted from queue is : %d\n", queue_array[front++]);
            printf("------------------------------\n");
      }
}
void display()
{
      int i;
      if (front == - 1)
            printf("Queue is empty \n");
      else
      {
            printf("\nQueue is : ");
            for (i = front; i <= rear; i++)
                  printf("%d ", queue_array[i]);
            printf("\n------------------------------");
            printf("\n");
      }
}