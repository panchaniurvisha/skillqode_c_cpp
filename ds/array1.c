/*#include<stdio.h>
void insert(int a[])
{
    for(int i=0;i<5;i++)
        printf("\n %d",a[i]);
}
void printArray(int *a)
{
    for(int i=0;i<5;i++)
        printf("\n %d",a[i]);
}
void lastInsert()
{
    int a[]={6,7};
    for(int i=0;i<2;i++)
        printf("\n %d",a[i]);
}
int main()
{
    int a[]={1,2,3,4,5};
    insert(a);
    printArray(a);
    lastInsert();
}*/
#include<stdio.h>
int* getArray(int p[])
{
    printf("Array inside function: ");
    for (int i = 0; i < 5; ++i)
        p[i]*=p[i];
    return p;
}
int main()
{
    int *p=NULL;
    int a[] = {1, 2, 3, 4, 5};
    p = getArray(a);
    printf("Array outside function: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(p+i));
    return 0;
}