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
    for(int i=0; i<10;i++)
    {
        if(a[i]==x)
        {
			printf("element found ");
            return i++;		 
        }
    }
	printf("element  not  found");
}