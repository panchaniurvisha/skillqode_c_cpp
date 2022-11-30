//DOUBLE ENDED QUEUE_sir program__________________________________________
/*#include<stdio.h>
#define SIZE 3
int front=-1,rear=-1,deque_arr[SIZE];
void insert_rear() 
 {
    printf("\n BEfore-->front : %d \t rear : %d ",front,rear); 
    int added_item;
    if((front == 0 && rear == SIZE - 1) || (rear+1==front))
    {
        printf("\n Queqe Is Full:");
        return;
    }
    if(front==-1)
    {
        front =0;
        rear= 0;
    }
    else if(rear == SIZE -1)
    {
        rear = 0;
    }
    else
        rear = rear +1;
        printf("\n Input the elements for adding queue :");
        scanf("%d",&added_item);
        deque_arr[rear] = added_item;
        printf("\n after -- > front :%d,rear :%d",front,rear);
} 
void insert_front()
{
    printf("\n After -->  front : %d \t rear : %d ",front,rear);    
    int added_item;
    if((front==0 && rear == SIZE - 1)||(front == rear+1))
    {    
        printf("Overflow"); 
        return ;   
    }   
    if(front == -1)  
    {    
        front =0;rear = 0;
    }    
    else if(front == 0)  
    {
        front = SIZE - 1;
    }
    else
        front=front-1;
        printf("\n Input the elements for adding queue :");
        scanf("%d",&added_item);
        deque_arr[front] = added_item;
        printf("\n after -- > front : %d \t rear : %d ",front,rear);
}
void delete_front(){
    if(front==-1)
    {
        printf("Queue is empty:");
        return ;
    }
    printf("\n Elements deleted from queue is :%d",deque_arr[front]);
    if(front==rear)
    {
       front = -1;
       rear = -1;
    }
    else if(front == SIZE - 1)
    {
        front =0;
    }
    else
    {
        front =front + 1;
    }
}
void delete_rear(){
    if(front==-1)   
    {    
        printf("Deque is underflow");   
        return ; 
    }   
    printf("\n Elements deleted from queue is :%d",deque_arr[rear]);
    if(front==rear)    
    {    
       front = -1; 
       rear=-1;
    }    
    else if(rear==0)    
    {    
       rear = SIZE - 1;    
    }    
    else    
    {    
       rear = rear -1;
    }   
}    
void display_queue(){
    int front_pos=front,rear_pos=rear;
    if(front==-1)
    {
        printf("Queqe Is empty:"); 
        return;
    }
    printf("\n Queue elements :");
    if(front_pos <= rear_pos)
    {
        while(front_pos <= rear_pos)
        {
          printf("\t%d",deque_arr[front_pos]);
          front_pos++;
        }
    }
    else
    {
        while(front_pos <=SIZE -1)
        {
          printf("\t%d",deque_arr[front_pos]);
          front_pos++;
        }
        front_pos =0;
        while(front_pos <= rear_pos)
        {
          printf("\t%d",deque_arr[front_pos]);
          front_pos++;
        }
    }
    printf("\n");
} 
int main()
{
    int ch;
    do 
    {
        printf("\n press 1. for-->> Insert at rear");
        printf("\n press 2 for-->> Insert at front");
        printf("\n press 3 for-->> Delete from rear");
        printf("\n press 4 for-->> Delete from front");
        printf("\n press 9 for-->> print");
        printf("\n press 0 for-->> exit");
        printf("\n enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            insert_front();
            break;
        case 3:
            delete_rear();
            break;
        case 4:
            delete_front();
            break;
        case 9:
            display_queue();
            break;
        case 0:
            break;
        default:
            printf("\nWrong choice\n");
       }
    }
    while(ch != 0);
}*/
//my progrm============================
#include<stdio.h>
#define SIZE 3
int front=-1,rear=-1,queqe[SIZE],val;
void RearInsert() 
 {
    printf("\n front : %d \t rear : %d ",front,rear); 
    if(rear+1==SIZE)
    {
        printf("Queqe Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queqe[rear]=val;
        printf("\n front : %d \t rear : %d ",front,rear);
        printf("Enter Value:");
        scanf("%d",&val);
    }
    else
    {
        queqe[++rear]=val;
        printf("\n front : %d \t rear : %d ",front,rear);
        printf("Enter Value:");
        scanf("%d",&val);
       
    }
        queqe[rear]=val;
} 
void frontInsert(){
    printf("\n before -->  front : %d \t rear : %d ",front,rear);    
    int added_item;
    if(front == rear+1)
    {    
        printf("Overflow"); 
        return ;   
    }   
    if(front == -1)  
    {    
        front =0;rear = 0;
        printf("\n after -- > front : %d \t rear : %d ",front,rear);
    }    
    else if(front == 0)  
    {
        front = SIZE - 1;
        printf("\n after -- > front : %d \t rear : %d ",front,rear);
    }
    else
    {
        front=front-1;
        printf("\n after -- > front : %d \t rear : %d ",front,rear);
    }
        printf("\n Input the elements for adding queue :");
        scanf("%d",&added_item);
        queqe[front] = added_item;
}
void rearDelete(){
    printf("\n front : %d \t rear : %d ",front,rear);
    if(front==-1)   
    {    
        printf("Deque is underflow");   
        return ; 
    }   
    printf("\n Elements deleted from queue is :%d",queqe[rear]);
    if(front==rear)    
    {    
       front = -1; 
       rear=-1;
    }    
    else if(rear==0)    
    {    
       rear = SIZE - 1;    
    }    
    else    
    {    
       rear = rear -1;
    }   
}    
void FrontDelete(){
     if(front==-1)
    {
        printf("Queue is empty:");
        return ;
    }
    printf("\n Elements deleted from queue is :%d", queqe[front]);
    if(front==rear)
    {
       front = -1;
       rear = -1;
    }
    else if(front == SIZE - 1)
    {
        front =0;
    }
    else
    {
        front =front + 1;
    }
}
void print()
{
    int i=front;
    printf("\n elements in a deque are==");
    while(i!=rear)
    {
        printf("\t%d",queqe[i]);
        i=(i+1)%SIZE;
    }
    printf("\t%d", queqe[rear]);

} 
int main()
{
    int ch;
    do 
    {
        printf("\n press 1 for-->> rear insert");
        printf("\n press 2 for-->>  front insert");
        printf("\n press 3 for-- rear delete");
        printf("\n press 4 for-->> front delete");
        printf("\n press 9 for-->> print");
        printf("\n press 0 for-->> exit");
        printf("\n enter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            RearInsert();
            break;
        case 2:
            frontInsert();
            break;
        case 3:
            rearDelete();
            break;
        case 4:
            FrontDelete();
            break;
        case 9:
            print();
            break;
        case 0:
            break;
        default:
            printf("\nWrong choice\n");
       }
    }
    while(ch!=0);
}