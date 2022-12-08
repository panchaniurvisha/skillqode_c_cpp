#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
}
void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }

else
    {
        temp->next = ptr;
        head = temp;
    }
}
void midinsert(int val, int pos)
{
    struct node *ptr = head, *prev;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
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
void deletefirst()
{
    struct node *ptr = head;

    if (head == NULL)
        printf("Already Empty..");

    else
    {
        head = ptr->next;
        free(ptr);
    }
}
void middelet(int pos)
{
    struct node *ptr = head, *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertfirst(60);
    insertfirst(70);
    midinsert(35, 10);
    print();
    middelet(45);
    print();
    // deleteend();
    // deleteend();
    deletefirst();
    print();
}
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int count =0;
    if(head==NULL)
        printf("\n list is empty");
        struct node *ptr = NULL;
        ptr=head;
        while(ptr!=NULL)
        {
            printf("\t %d",ptr->data);
            count++;
            ptr=ptr->next;
        }
        printf("\n List count :%d",count);
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr = *head_ref;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp->next =NULL;
    temp->data=new_data;
    if(*head_ref == NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=temp;
    return;
}
void insert_beg(struct node **head_ref,int new_data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=new_data;
    temp->next=*head_ref;
    *head_ref=temp;
}
void delete_node(struct node **head_ref,int key)
{
    struct node *temp =*head_ref,*prev;
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp == NULL)
        return;
    prev->next =temp->next;
    free(temp);
}
int main()
{
    struct node *head =NULL;
    insert_end(&head,11);
    //insert_befg(&head,10);
    insert_end(&head,12);
    insert_end(&head,13);
    //delete_node(&head,12);
    head_count(head);
    return 0;
}*/