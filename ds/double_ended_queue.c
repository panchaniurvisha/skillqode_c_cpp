//DOUBLE ENDED QUEUE___________________________________________
#include<stdio.h>
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
        printf("\n after -- > front :%d,rear :%d,front,rear");
} 
void insert_front()
{
    printf("\n After -->  front : %d \t rear : %d ",front,rear);    
    int added_item;
    if((front==0 && rear == SIZE - 1)||(front = rear+1));
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
}
//changes progrm============================
/*#include<stdio.h>
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
void FrontDelete(){
    printf("\n front : %d \t rear : %d ",front,rear); 
    if(front==-1)
    {
        printf("Queue is empty:");
    }
    else if(front==rear)
    {
        int x=queqe[front];
        printf("\n value delete :%d",x); 
        front=rear=-1;
    }
    else
    {
        int x=queqe[front++];
        printf("\n value delete :%d",x);
    }
}
void print(){
    printf("\n front : %d \t rear : %d ",front,rear); 
    if(front==-1)
    {
        printf("Queqe Is empty:"); 
    }
    else
    {
        for(int i=front;i<=rear;i++)
        printf("\n\t\tq[%d]=%d",i,queqe[i]);
    }
} 
void frontInsert(){
    printf("\n front : %d \t rear : %d ",front,rear); 
    {    
    if(front>=SIZE)
    {    
        printf("Overflow");    
    }    
    else if(front==-1)  
    {    
        front=rear=SIZE-1;   
    }    
    else    
    {   
        printf("\n front : %d \t rear : %d ",front,rear);
        queqe[front--]=val;
        printf("Enter Value :");
        scanf("%d", &val);  
        queqe[front]=val;  
    }    
}    
    /*if (front==rear+1)
        printf("\nQueue Is Full.....\n");
    else if (front == -1)
    {
        front = SIZE-1;
        rear = SIZE-1;
    }
    else
    {
        front = front - 1;
        printf("Enter Value :");
        scanf("%d", &val);
    }
}
void rearDelete(){
    printf("\n front : %d \t rear : %d ",front,rear); 
    if((front==-1) && (rear==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(front==rear)    
    {    
        printf("\nThe deleted element is %d",val);    
        front=rear=-1;
    }    
     else if(rear==0)    
     {    
         printf("\nThe deleted element is %d",val);    
         rear=SIZE-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d",val);    
           queqe[--rear]=val;
     }    
}    
int main()
{
    int ch;
    do 
    {
        printf("\n press 1 for-->> rear insert");
        printf("\n press 2 for-->> front delete");
        printf("\n press 3 for-->> front insert");
        printf("\n press 4 for-->> rear delete");
        printf("\n press 5 for-->> print");
        printf("\n press 0 for-->> exit");
        printf("\n enter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            RearInsert();
            break;
        case 2:
            FrontDelete();
            break;
        case 3:
            frontInsert();
            break;
        case 4:
            rearDelete();
            break;
        case 5:
            print();
            break;
       }
    }
    while(ch!=0);
}*/
//Double_Ended _queue
/*#include <stdio.h>    
#define size 5  
int deque[5],front=-1,rear=-1,x,ch;
void insert_front(){    
    printf("\n front : %d \t rear : %d ",front,rear);
    if(front==rear+1){    
        printf("Overflow");    
    }    
    else if(front==rear==-1) {    
        front=rear=+1;    
        deque[front]=x;  
        printf("\n value inserted :");
        scanf("%d",&x);  
    }    
    else if(front==0){    
        front=size-1;    
        deque[front]=x;
        printf("\n value inserted :");
        scanf("%d",&x);        
    }    
    else {  
        printf("\n value inserted :");
        scanf("%d",&x);   
        deque[--front]=x;   
    }    
}
void delete_rear(){    
    printf("\n front : %d \t rear : %d ",front,rear); 
    if(front==rear==-1){    
        printf("Deque is empty");    
    }    
    else if(front==rear){ 
        deque[rear]=x;
        printf("\nThe deleted element is %d",x);    
        front=rear=-1;          
    }   
     else if(rear==0){ 
         deque[rear]=x;
        printf("\nThe deleted element is %d",x);  
        rear=size-1;         
     }    
     else{      
          printf("\nThe deleted element is %d",x);  
          x=deque[--rear];  
     }
}   
void display(){    
    printf("\n front : %d \t rear : %d ",front,rear);
    if(front==rear==-1){  
        printf("\nEmpty queue\n");  
    }  
    else{   
        printf("\nprinting values .....\n");  
        for(int i=front;i<=rear;i++)  
            printf("\n%d\n",deque[i]);  
    }  
}
int main()    
{   
     do
        {
          printf("\n Enter the Choice:");
          scanf("%d",&ch);
          switch(ch)
          {
            case 1:
            {
                insert_front();
                break;
            }
            case 2:
            {
                delete_rear();
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
    while(ch!=4);
    return 0;
}*/
//Double_Ended _queue
/*#include <stdio.h>    
#define size 5  
int deque[5],front=-1,rear=-1,x,ch;
void insert_front(){    
    printf("\n front : %d \t rear : %d ",front,rear);
    if(front==rear+1){    
        printf("Overflow");    
    }    
    else if(front==rear==-1) {    
        front=rear=+1;    
        deque[front]=x;  
        printf("\n value inserted :");
        scanf("%d",&x);  
    }    
    else if(front==0){    
        front=size-1;    
        deque[front]=x;
        printf("\n value inserted :");
        scanf("%d",&x);        
    }    
    else {  
        printf("\n value inserted :");
        scanf("%d",&x);   
        deque[--front]=x;   
    }    
}
void delete_rear(){    
    printf("\n front : %d \t rear : %d ",front,rear); 
    if(front==rear==-1){    
        printf("Deque is empty");    
    }    
    else if(front==rear){ 
        deque[rear]=x;
        printf("\nThe deleted element is %d",x);    
        front=rear=-1;          
    }   
     else if(rear==0){ 
         deque[rear]=x;
        printf("\nThe deleted element is %d",x);  
        rear=size-1;         
     }    
     else{      
          printf("\nThe deleted element is %d",x);  
          x=deque[--rear];  
     }
}   
void display(){    
    printf("\n front : %d \t rear : %d ",front,rear);
    if(front==rear==-1){  
        printf("\nEmpty queue\n");  
    }  
    else{   
        printf("\nprinting values .....\n");  
        for(int i=front;i<=rear;i++)  
            printf("\n%d\n",deque[i]);  
    }  
}
int main()    
{   
     do
        {
          printf("\n Enter the Choice:");
          scanf("%d",&ch);
          switch(ch)
          {
            case 1:
            {
                insert_front();
                break;
            }
            case 2:
            {
                delete_rear();
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
    while(ch!=4);
    return 0;
}*/
