#include<stdio.h>
#define size 5
int main()
{
    int a[size],b[size];
    printf("\n enter array elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\n enter array elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<size;i++)
       printf("%d\n",a[i]);
    return 0;
}

   