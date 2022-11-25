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
        printf("\n front : %d \t rear : %d ",front,rear);
        printf("Enter Value:");
        scanf("%d",&val);
        queqe[rear]=val;
    }
    else
    {
        printf("\n front : %d \t rear : %d ",front,rear);
        printf("Enter Value:");
        scanf("%d",&val);
        queqe[++rear]=val;
    }
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
    if (front+1==SIZE)
        printf("\nQueue Is Full.....\n");
    else if (front == -1)
    {
        front = SIZE;
        rear = SIZE;
    }
    else
    {
        front = front - 1;
        printf("Enter Value :");
        scanf("%d", &val);
        queqe[front] = val;
    }
}
void rearDelete(){
    printf("\n front : %d \t rear : %d ",front,rear); 
    if (rear == 0)
        printf("\nQueue Is Empty.....\n");
    else
        rear--;
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
}

