#include<stdio.h>
#define n 10
int totalElement;
void quicksort(int number[10],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        // printf("\n inside quick:");
        // for(i=0;i<=totalElement;i++)
        //     printf("%d",number[i]);
            
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
            i++;
            while(number[j]>number[pivot]);
            j--;
            if(i<j)
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
};
int main()
{
    int i,number[10];
    printf("how many elements are you goint to enter :");
    scanf("%d",&totalElement);
    printf("Enter %d elements :",totalElement);
    for(i=0;i<totalElement;i++)
    {
        scanf("%d",&number[i]);
    }
    //printf(number);

    quicksort(number,0,totalElement-1);

    printf("\n order of sorted elements :");
    for(i=0;i<totalElement;i++)
    {
        printf("%d",number[i]);
    }
    //printf(number);
    return 0;
}