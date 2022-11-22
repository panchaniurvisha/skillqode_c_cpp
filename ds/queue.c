//QUEUE.......................................................
/*#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 100 
void insert();  
void front_Delete();  
void display();  
int front = -1, rear = -1,n,x,choice;  
int queue[100];  
int main ()  
{        
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\n Enter the size of queue[MAX=100]:");
        scanf("%d",&n);  
        do
        {
          printf("\n Enter the Choice:");
          scanf("%d",&choice);
          switch(choice)
          {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                front_Delete();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
          }
        }
    while(choice!=4);
    return 0;
}
void insert()  
{      
    //if(rear==n-1)  
    if(rear>=n-1)
    {  
        printf("\nqueue is overflow\n");  
    }  
    else if(front == -1 && rear == -1)  
    {  
        front = rear=0;  
        printf("\n value inserted :");
        scanf("%d",&x); 
        queue[rear]=x;
    }  
    else   
    {  
       printf("\n value insert :");
       scanf("%d",&x);
       queue[++rear]=x;
    }  
}  
void front_Delete()  
{     
    if (front==-1)  
    {  
        printf("\nUNDERFLOW\n");  
        // return;      
    }  
    else if(front==rear)  
    {  
        x = queue[front];
        front=rear=-1;  
         printf("\n value delete :%d",x);
    }
    else
    {  
         x=queue[front++]; 
         printf("\nvalue deleted :%d",x); 
           
    }  
} 
void display()  
{  
    if(front == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(int i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
} */
//use parameter--------------------------------------------
#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 100 
void insert(int ,int );  
void front_Delete(int ,int);  
void display();  
int front = -1, rear = -1,n,x,choice;  
int queue[100];  
int main ()  
{        
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\n Enter the size of queue[MAX=100]:");
        scanf("%d",&n);  
        do
        {
          printf("\n Enter the Choice:");
          scanf("%d",&choice);
          switch(choice)
          {
            case 1:
            {
                insert(11,22);
                break;
            }
            case 2:
            {
                front_Delete(11,22);
                break;
            }
            case 3:
            {
                display(11,22);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
          }
        }
    while(choice!=4);
    return 0;
}
void insert( int x,int y)  
{      
    //if(rear==n-1)  
    if(rear>=n-1)
    {  
        printf("\nqueue is overflow\n");  
    }  
    else if(front == -1 && rear == -1)  
    {  
        front = rear=0;  

        queue[rear]=x;
    }  
    else   
    {  
       printf("\n value insert :");

       queue[++rear]=x;
    }  
}  
void front_Delete(int x,int y)  
{     
    if (front==-1)  
    {  
        printf("\nUNDERFLOW\n");  
        // return;      
    }  
    else if(front==rear)  
    {  
        x = queue[front];
        front=rear=-1;  
        
    }
    else
    {  
         x=queue[front++]; 
        
           
    }  
} 
void display(int x,int y)  
{  
    if(front == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(int i=front;i<=rear;i++)  
        {  
            printf("\n%d -%d\n",x,y);  
        }     
    }  
} 
//front----{insert} AND-------rear{delete}
/*#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 100 
void insert();  
void front_Delete( );  
void display();  
int front = -1, rear = -1,n,x,choice;  
int queue[100];  
int main ()  
{        
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\n Enter the size of queue[MAX=100]:");
        scanf("%d",&n);  
        do
        {
          printf("\n Enter the Choice:");
          scanf("%d",&choice);
          switch(choice)
          {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                front_Delete();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
          }
        }
    while(choice!=4);
    return 0;
}
void insert()  
{      
    //if(rear==n-1)  
    if(front>=n-1)
    {  
        printf("\nqueue is overflow\n");  
    }  
    else if(front == -1 && rear == -1)  
    {  
        front = rear=0;  
        printf("\n value inserted :");
        scanf("%d",&x); 
        queue[front]=x;
    }  
    else   
    {  
       printf("\n value insert :");
       scanf("%d",&x);
       queue[++front]=x;
    }  
}  
void front_Delete()  
{     
    if (rear==-1)  
    {  
        printf("\nUNDERFLOW\n");  
        // return;      
    }  
    else if(front==rear)  
    {  
        x = queue[rear];
        front=rear=-1;  
         printf("\n value delete :%d",x);
    }
    else
    {  
         x=queue[rear++]; 
         printf("\nvalue deleted :%d",x); 
           
    }  
} 
void display()  
{  
    if(front == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(int i=rear;i<=front;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
} */






