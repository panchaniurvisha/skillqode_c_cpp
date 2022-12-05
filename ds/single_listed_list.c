#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
void head_count(struct Node *head)
{
    int count=0;
    if(head==NULL)
    printf("\n List is empty");
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t %d",ptr);
        count++;
        ptr=ptr->link;
    }
    printf("\n list count :%d",count);
}
int main()
{
    struct Node *head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=11;
    head->link=NULL;

    struct Node *current=(struct Node*)malloc(sizeof(struct Node));
    current->data=22;
    current->link=NULL;

    struct Node *current1=(struct Node*)malloc(sizeof(struct Node));
    current1->data=33;
    current1->link=NULL;
    
    
    head->link=current;
    head->link->link=current1;

    printf("%d\t",head->data);
    printf("%d\t",head->link->data);
    printf("%d\t",head->link->link->data);
    head_count(head);
    return 0;
}