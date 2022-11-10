#include<stdio.h>
int *getarray(int *a)
{
	printf("\n enter elements in array:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	return a;
}
int main()
{
	int *n;
	int a[5];
	n=getarray(a);
	printf("\n elements of array are :");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",n[i]);
	}
	return 0;
}
	