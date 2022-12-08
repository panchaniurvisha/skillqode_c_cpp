#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void printList(struct node *node)
{
    struct node *last;
    while(node !=NULL)
    {
        printf("<-%d->",node->data);
        last=node;
        node=node->next;
    }
    if(node==NULL)
    printf("NULLL\n");
}
int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    
    one->data=11;
    two->data=22;
    three->data=33;

    one->next=two;
    one->prev=NULL;

    two->next=three;
    two->prev=one;

    three->next=NULL;
    three->prev=two;
    head=one;
    //printf("%d",three->prev->prev->data);
    printf("%d",one->next->next->data);
    //printList(head);
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void printList(struct node *node)
{
    struct node *last;
    while(node !=NULL)
    {
        printf("<-%d->",node->data);
        last=node;
        node=node->next;
    }
    if(node==NULL)
    printf("NULLL\n");
}
int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    
    one->data=11;
    two->data=22;
    three->data=33;

    one->next=two;
    one->prev=NULL;

    two->next=three;
    two->prev=one;

    three->next=NULL;
    three->prev=two;
    head=one;
    //printf("%d",three->prev->prev->data);
    printf("%d",one->next->next->data);
    printList(head);
}
/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void print()
{
    struct node *ptr = head;
    if (head == NULL)
        printf("Underflow.....");
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return;
}
void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while (ptr->next != NULL)
        ptr = ptr->next;
        ptr->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void deleteEnd()
{
    struct node *ptr;
    struct node *prev;
    if (head == NULL)
        printf("Already Empty....\n"); 
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
     insertEnd(50);
     insertEnd(60);
    // insertEnd(70);
    insertfirst(100);
    insertfirst(200);
    insertfirst(300);
    print();
    deleteEnd();
    deleteEnd();
    print();
}*/