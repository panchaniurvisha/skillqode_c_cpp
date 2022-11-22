#include<stdio.h>
#include<stdlib.h>
/*int main()
{

    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%70;
        printf("\n a[%d] : %d",i,a[i]);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a[30];
    // for(int i=1;i<10;i++)
    //     printf("\t %d",rand()%100);
    for(int i=0;i<10;i++)
    {
       a[i]=rand()%20+10;
        printf("\n a[%d] : %d",i,a[i]);
    }
    return 0;
}
