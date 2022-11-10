#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55};
	int i,*ptr=NULL;
	ptr=a;
	printf("\n address\tvalue\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	for(i=0;i<5;i++)
	{
		printf("\n %u\t%d",(ptr+i),*(ptr+i));
	}
	return 0;
}