/*#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
int main()
{
        int a[10],i,j,temp=0;
        for(int i=0;i<10;i++)
        {
            a[i]=rand()%50;
            printf("%d\t %d\n",i,a[i]);
        }
        for (int i = 0; i <10-1; i++)
        {     
            for (int j =0; j < 10-i-1; j++) 
            {     
               if(a[j] > a[j+1]) {    
               temp = a[j];    
               a[j] = a[j+1];    
               a[j+1] = temp;    
           } 
           else
           {}    
        }  
    }    
    printf("\nElements of array sorted in ascending order: \n");    
    for (int i = 0; i <10; i++) { 
    printf("\n%d\t %d ",i,a[i]);
    }
    
    //Descending____________________ORDER_________________________
        for (int i = 0; i <10-1; i++)
        {     
            for (int j =0; j < 10-i-1; j++) 
            {     
               if(a[j] < a[j+1]) {    
               temp = a[j];    
               a[j] = a[j+1];    
               a[j+1] = temp;    
           } 
           else
           {}    
        }  
    }  
    printf("\n\n\nElements of array sorted in descending order: \n");    
    for (int i = 0; i <10; i++) { 
    printf("\n%d\t %d ",i,a[i]);
    }  
    return 0;
}*/
#include<stdlib.h>
#include<stdio.h>
int a[30],count=0, swapcount=0;
void bubblesort(int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j] = a[j+1];
                a[j+1] =temp;
                swapcount++;
            }
            else
            {}
        }
    }

    printf("\n sorted array is :");
    for(int i=0;i<n;i++)
    printf("\n%d\t%d",i,a[i]);
    printf("\n swapping possibility count :%d",count);
    printf("\n swapping count :%d",swapcount);
}
int main()
{
    int i,n;
    printf("How many elements are you going to enter ? :");
    scanf("%d",&n);
    printf("\n array elements:");

    for(i=0;i<n;i++)
    {
        a[i]=rand() %99;
        printf("\n %d\t %d",i,a[i]);
    }
    bubblesort(n);
    return 0;
}