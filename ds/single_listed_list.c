//creating list
/*#include<stdio.h>
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
}*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                        //Data of the node
    struct node *nextptr;           //Address of the next node
}*stnode;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;      
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr; 
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);       // prints the data of current node
            tmp = tmp->nextptr;                     // advances the position of current node
        }
    }
} 
