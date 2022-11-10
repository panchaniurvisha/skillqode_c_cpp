#include<stdio.h>
void pattern(int a)
{
	int i,j,sp=15;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		sp--;
	}

}
int main()
{
	int a;
	
	pattern (3);
	pattern (5);
	pattern (7);
} 