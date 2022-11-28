//SEARCH=======================using..rand()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],x;
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%50;
        printf("%d\t",i);
        printf("%d\n",a[i]);
    }
     printf("Enter the key :");
     scanf("%d",&x);
     //selaction sort================
    for(int i=0; i<10;i++)
    {
        if(a[i]==x)
        {
			printf("element found at %d position ",i++);
            return i++;		 
        }
    }
	printf("element  not  found");
}
/*#define n 10;
int linear(int a[])
{
    int val;
    printf("|n enter elements to find :");
    scanf("%d",&val);
    for(int i=0;i<10;i++)
    {
        if(a[i]==val)
        {
            printf("\n elements found at %d position ",i++);
            return i++;
        }
    }
    return -1;
}
int main()
{
    int a[10],b;
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%10+1;
    }
    for(int i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
    b==linear(a);
    if(b==-1)
        printf("\n elements does not found ");
    else
        printf("\n elements found successfully");
}*/