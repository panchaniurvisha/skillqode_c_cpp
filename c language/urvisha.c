include<stdio.h>
int main()
{
	int  i,a[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n  a[%d]  :",i);
		scanf("%d",&a[i]);
	}
		printf("\n your array is \n\n");
		for(i=0;i<5;i++)
		if(i%2==0)
		{
		printf(" \n even position a[%d] :",i);
		printf("%d",a[i]);
		}
		else
		{
		printf("\n  a[%d] :",i);
		printf("%d",a[i]);
		}


	return 0;	
}	