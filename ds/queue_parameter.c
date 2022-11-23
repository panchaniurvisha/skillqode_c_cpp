//use parameter--------------------------------------------
#include<stdio.h>
#define SIZE 5
void insert(int);
void front_Delete();
void display();
int queue[5],front=-1,rear=-1,x;
int main(){
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    display();
    front_Delete();
    display();
    front_Delete();
    display();
    return 0;
}
void insert(int x){
    if(rear>=SIZE-1){  
     printf("\nqueue is overflow\n");
    }   
    else if(front == -1 && rear == -1){  
        front = rear=0;  
        printf("\n value inserted :%d",x);
        queue[rear]=x;
    }  
    else{  
       printf("\n value insert :%d",x);
       queue[++rear]=x;
    }  
}  
void front_Delete(){
   if (front==-1){  
        printf("\nUNDERFLOW\n");   
    }  
    else if(front==rear){  
        x = queue[front];
        front=rear=-1;  
         printf("\n value delete :%d",x);
    }
    else{  
         x=queue[front++]; 
         printf("\nvalue deleted :%d",x);     
    }  
} 
void display(){
    if(front == -1){  
        printf("\nEmpty queue\n");  
    }  
    else {
           printf("\nprinting values .....\n");  
            for(int i=front;i<=rear;i++)  
            printf("\n%d\n",queue[i]);    
    }  
}