#include<stdio.h>
int main()
{
    int a[5],b[10],i;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter second array elements====");
    for(int i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<15;i++)
     a[i]=a[i]+b[i];
     printf("\n %d",a[i]);  
    return 0;
}


   