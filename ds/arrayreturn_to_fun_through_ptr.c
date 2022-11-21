//return array through pointer using parameter
#include<stdio.h>
int *getArray(int p[])
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
        printf("%d\n", a[i]);
        //printf("%d\n", *(p+i));
        //printf("%u\n",(&p+i));
    return 0;
}
/*#include <stdio.h>  
int *getarray(int *a)  
{  
    printf("Enter the elements in an array :\n ");  
    for(int i=0;i<5;i++)   
        scanf("%d", &a[i]);  
    return a;  
}  
int main()  
{  
  int *p=NULL,a[5];  
  p=getarray(a);  
  printf("\nElements of array are :\n");  
  for(int i=0;i<5;i++)   
        printf("\n%d", *(p+i));  
    return 0;  
} */