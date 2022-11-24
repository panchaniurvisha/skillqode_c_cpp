//Double_Ended _queue
#include <stdio.h>    
#define size 5  
int deque[5],front=-1,rear=-1,x;;  
void insert_front(int x){    
    if(front==rear+1){    
        printf("Overflow");    
    }    
    else if(front==rear==-1) {    
        front=rear=0;    
        deque[front]=x;  
        printf("\n value inserted :%d",x);  
    }    
    else if(front==0){    
        front=size-1;    
        deque[front]=x;
        printf("\n value inserted :%d",x);      
    }    
    else {  
        printf("\n value inserted :%d",x);  
        deque[front--]=x;   
    }    
}  
void delete_rear(){    
    if(rear==-1){    
        printf("Deque is empty");    
    }    
    else if(front==rear){ 
        deque[rear]=x;
        printf("\nThe deleted element is %d",x); 
        front=rear=-1;             
    }   
     else if(rear==0){ 
        printf("\nThe deleted element is %d", deque[rear]);  
        rear=size-1;         
     }    
     else{      
          printf("\nThe deleted element is %d",x);  
          x=deque[rear--];  
     }
}       
void display()  
{  
    if(rear==-1){  
        printf("\nEmpty queue\n");  
    }  
    else{   
        printf("\nprinting values .....\n");  
        for(int i=rear;i<=front;i++)  
            printf("\n%d\n",deque[i]);  
    }  
}
int main()    
{    
    insert_front(10);    
    insert_front(20); 
    insert_front(30);
    insert_front(40);
    display();   
    delete_rear(); 
    display();
    delete_rear();
    display();
    delete_rear();
    display();
    delete_rear();   
   
    return 0;    
}     