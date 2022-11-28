//SEARCH=======================using..rand()
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10;
int a[10],i,temp=0,low=0,high=9,mid,x,ch;
void linear_search()
{
    
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
			printf("element found at %d position ",i++);
            return i++;		 
        }
    }
	printf("element  not  found");
}
void sorting()
{
     printf("\n\n Enter New Elements in binary search________________________________________");
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%50;
        printf("\n %d\t %d",i,a[i]);   
    }      
    for (int i = 0; i <10-1; i++) {     
        for (int j = i+1; j < 10; j++) {     
           if(a[i] > a[j]) {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           } 
           else
           {}    
        }  
    }    
    printf("\nElements of array sorted in ascending order: \n");    
    for (int i = 0; i <10; i++) { 
    printf("\n%d\t %d ",i,a[i]);
    }
}
void binary_search()
{
    sorting();
    printf("Enter the key :");
    scanf("%d",&x);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
             printf("element found at %d position\t %d",x,mid);
             break;
        }
        else if (a[mid]>x){
            high=mid-1;
        }
        else
            low=mid+1;
    } 
    if(low>high)
    {
        printf("\n not found %d",x);
    }
   
}    
int main()
{
     do
     {
        printf("\n press 1.linear search-------------");
        printf("\n press 2.binary search-------------");
        printf("\n press 0.Exit");
        printf("\n enter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                  linear_search();
                  break;
            case 2:
                  binary_search();
                  break;
            case 0:
                  break;
           default:
                  printf("\n wrong choice");
                  break;
        }
     }
     while(ch!=0);
}