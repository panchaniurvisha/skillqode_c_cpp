#include<stdio.h>
//int main()
/*{
char a[]={'a','b','c','d','e'};
        for(int i=0;i<5;i++)
            printf("\n %c-%u",a[i],&a[i]);
            printf("\n %d",sizeof(char));
}*/
/*{
    int a[]={11,22,33,44,55};
        for(int i=0;i<5;i++)
            printf("\n %d -%u",a[i],&a[i]);
            printf("\n %d",sizeof(int));
}*/
 // Function to return an array using pointers.
/*int * getArray()
{
    int a[] = {1, 2, 3, 4, 5};
    int i;
    printf("Array inside function: ");
    // Print value of each array element
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", a[i]);
    }
    return a;
}
int main()
{
    int i;
    // Pointer to store array
    int * a;
    // Call getArray function to get pointer to array
    a = getArray();
    printf("Array outside function: \n");
    // Print value of each array element
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}*/
//array change in function so main function change....it becomes only in array not normal variable
//we dont need to use return....
void array(int a[])//void array(int* a)...or void array(int *a)
{
    for(int i=0;i<5;i++)
        //a[i]*=2;
        printf("\n %d -%u",a[i],&a[i]);
}
int main()
{
    int a[]={11,22,33,44,55};
        for(int i=0;i<5;i++)
        printf("\n %d -%u",a[i],&a[i]);
        array(a);
        /*for(int i=0;i<5;i++)
        printf("\n %d -%u",a[i],&a[i]);*/
}
/*void printarray(char *arr)  
{  
    printf("Elements of array are : ");  
    for(int i=0;i<5;i++)  
    {  
        printf("%c ", arr[i]);  
    }  
}  
int main()  
{  
  char arr[5]={'A','B','C','D','E'};  
  printarray(arr);  
  return 0;  
}  */