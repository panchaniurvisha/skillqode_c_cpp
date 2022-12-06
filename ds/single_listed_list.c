//creating list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct Node *head)
{
    int count=0;
    if(head==NULL)
    printf("\n List is empty");
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        count++;
        ptr=ptr->next;
    }
    printf("\n list count :%d",count);
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in the linked list in heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;
    //link second and third nodes
    second->data=11;
    second->next=third;
    //link second and third nodes
    third->data=21;
    third->next=fourth;
    //link third and fourth nodes
    fourth->data=31;
    fourth->next=NULL;

    linkedListTraversal(head);
    return 0;
}
