/*#include<stdio.h>
#define pr printf //pre-processor directive
#define SIZE 10 //globally declaration constant value
int main()
{
    pr("hello");
}
void findSimpleInterest()
{

}*/
//stack :last in first out
/*#include<stdio.h>
#define SIZE 10
int a[SIZE],top=-1;
void push(int val)
{
    if(top>=10)
        stack overflow
    else
        a[++top]=val;
}
void pop()
{
    if(top<0)
        stack underflow
    else
        x=a[top--];
}*/
#include<stdio.h>
#define SIZE 10
int a[10],top=-1;
void push(val)
{
    /*for(int i=0;i<10;i++)
    {
        printf("enter a[%d] -",i);
		scanf("%d",&a[i]);
    }*/
    if(top>=10)
    {
        //stackoverflow
    }
    else
    {
        for(int i=0;i<10;i++)
        {
            a[++top]=val;
            printf("\n a[%d] -",i);
            scanf(" %d ",&val );
        }
    }
}
void arrayPrint(val)
{
    for(int i=0;i<10;i++)
    printf("\n a[%d] - %d",i,val);
}
int main()
{
    int val;
    push(val);
    arrayPrint(val);
    return 0;
}

