#include<stdio.h>//nrwp
void swap(int *x,int *y)
{
	int t;
	t  =*x;
	*x =*y;
	*y =t;
}
int main()
{
	int num1,num2;
	printf("\n enter value num1:");
	scanf("%d",&num1);
	printf("\n enter value num2:");
	scanf("%d",&num2);
	
	printf("before swapping num1 :%d, num2 is %d\n",num1,num2);
	swap(&num1,&num2);
	printf("after swapping num1 :%d, num2 is %d\n",num1,num2);
	return 0;
}