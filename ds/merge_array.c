#include<stdio.h>
int main()
{
    int a[5],b[10],n=5,n1=10,i;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter second array elements====");
    for(int i=0;i<n1;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n+n1;i++)
     b[i]=a[i]+b[i];
     printf("\n %d",a[i]);  
    return 0;
}


   